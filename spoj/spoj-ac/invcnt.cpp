#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 200000;

int a[MAXN],b[MAXN];
int bit[MAXN + 1];

int T, N, i, x;    
int main(){
    scanf("%d",&T);
    
    while(T--){
        scanf("%d",&N);
        
        for(i = 0;i < N;++i){
            scanf("%d",&a[i]);
            b[i] = a[i];
        }
        
        sort(b,b + N);
        int m = unique(b,b + N) - b;
        
        memset(bit,0,sizeof bit);
        ll ans = 0;
        
        for(i = 0;i < N;++i){
            a[i] = 1 + (lower_bound(b,b + m,a[i]) - b);
            ans += i;
            
            for(x = a[i];x > 0;x -= x & -x)
                ans -= bit[x];
            
            for(x = a[i];x <= MAXN;x += x & -x)
                ++bit[x];
        }
        
        printf("%lld\n",ans);
    }
    
    return 0;
}
