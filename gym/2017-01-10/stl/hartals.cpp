#include<bits/stdc++.h>
using namespace std;

int t, n, p, i, j, ans;
bool found;    
int main() {
    scanf("%d",&t);    
    while(t--){
        scanf("%d %d", &n, &p);
        vector<int> v;
        v.resize(p);
        for(i = 0; i < p; ++i) scanf("%d",&v[i]);
        
        ans = 0;
        for(i = 1; i <= n; ++i){
            if(i%7==6 || i%7==0) continue;
            
            found = false;
            
            for(j = 0; j < p; ++j)
                if(i % v[j]==0)
                    found = true;
            
            if(found) ++ans;
        }
        printf("%d\n",ans);
    }
    
    return 0;
}
