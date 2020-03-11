#include <bits/stdc++.h>
using namespace std;

const int maxn = 5001;
int dp[maxn][maxn],pre[maxn][maxn],n,m;
int k;
vector<int>E[maxn];
vector<int>val[maxn];
vector<int> ppap;

void dfs(int x, int num, int sp, int fa) {
    if(dp[x][num]<=sp)return;
    dp[x][num]=sp;pre[x][num]=fa;
    for(int i=0;i<E[x].size();i++)
        if(sp+val[x][i]<=k)
            dfs(E[x][i],num+1,sp+val[x][i],x);
}

void dfs2(int x,int y) {
    ppap.push_back(x);
    if(pre[x][y]==-1) {
        cout<<ppap.size()<<endl;
        for(int i=ppap.size()-1;i>=0;i--)
            cout<<ppap[i]<<" ";
        cout<<endl;
        return;
    }
    else
        dfs2(pre[x][y],y-1);
}

int i, j;
int main() {
    memset(pre,-1,sizeof(pre));
    for(i=0;i<maxn;i++)
        for(j=0;j<maxn;j++)
            dp[i][j]=1e9+7;
    
    scanf("%d%d%d",&n,&m,&k);    
    for(i=1;i<=m;i++) {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        E[a].push_back(b);
        val[a].push_back(c);
    }
    
    dfs(1,1,0,-1);
    for(i=n;i>=2;i--) {
        if(dp[n][i]<=k) {
            dfs2(n,i);
            break;
        }
    }
}