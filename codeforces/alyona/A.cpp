#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll ma=1e19;
ll n,a,b,c;

void dfs(ll x,ll ans) {
    if(x%4==0) ma=min(ma,ans);
    if(x>4*n) return;
    dfs(x+1,ans+a);
    dfs(x+2,ans+b);
    dfs(x+3,ans+c);
}

int main() {
    scanf("%I64d %I64d %I64d %I64d",&n,&a,&b,&c);
    if(n%4==0) puts("0");
    else {
        n%=4;
        dfs(n,0);
        printf("%I64d\n",ma);
    }
    return 0;
}