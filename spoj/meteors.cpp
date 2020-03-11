#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 300005;

int lo[N],hi[N];
vector<int> proc[N], sector[N];
int target[N];
ll BIT[N];
int l[N],r[N],val[N];

void update(int x,ll val, int m){
    for(; x <= m ; x += x & -x)
        BIT[x] += val;
}

ll query(int x){
    ll res = 0;
    for(; x > 0 ; x -= x & -x)
        res += BIT[x];
    return res;
}

void solve(int n, int m, int k){
	int i, j, curr, mid;
    bool change = 1;
    
    for(i = 1 ; i <= n ; i++){
        lo[i] = 1;
        hi[i] = k + 1;
        proc[(lo[i] + hi[i]) / 2].push_back(i);
    }

    while(change){
        change = 0;
        for(i = 1 ; i <= m ; i++)
            BIT[i] = 0;
        for(i = 1 ; i <= k ; i++){
            if(l[i] <= r[i]){
                update(l[i],val[i],m);
                update(r[i] + 1,-val[i],m);
            }
            else{
                update(l[i],val[i],m);
                update(1,val[i],m);
                update(r[i] + 1,-val[i],m);
            }
            while(!proc[i].empty()){
                curr = proc[i].back();
                proc[i].pop_back();
                ll tgt = target[curr];
                ll res = 0;
                for(j = 0 ; j < sector[curr].size() && res < tgt; j++)
                    res += query(sector[curr][j]);
                
                if(res >= tgt) hi[curr] = i;
                else lo[curr] = i + 1;
                if(lo[curr] < hi[curr]){
                    mid = (lo[curr] + hi[curr]) / 2;
                    proc[mid].push_back(curr);
                    change = 1;
                }
            }
        }
    }

    for(i = 1 ; i <= n ; i++)
        printf((lo[i] == k + 1)?"NIE\n":"%d\n",lo[i]);
}

int n, m, k, i, a;
int main(){
    scanf("%d %d",&n,&m);
    for(i = 1 ; i <= m ; i++){
        scanf("%d",&a);
        sector[a].push_back(i);
    }
    
    for(i = 1 ; i <= n ; i++)
        scanf("%d",&target[i]);
    
    scanf("%d",&k);
    
    for(i = 1 ; i <= k ; i++)
        scanf("%d %d %d",&l[i],&r[i],&val[i]);
    
    solve(n,m,k);
    return 0;
}
