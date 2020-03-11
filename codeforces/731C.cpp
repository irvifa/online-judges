#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e6+5;

struct edge {
    int from;
    int to;
    int next;
} e[MAXN];

int n, m, k, cnt, g;
int vis[MAXN], child[MAXN];
int color[MAXN], parent[MAXN];
int c[MAXN];
vector<int> b[MAXN];

void add(int from,int to) {
    e[cnt].to=to;
    e[cnt].next=parent[from];
    parent[from]=cnt++;
}

void dfs(int u) {
    color[u]=g;
    vis[u]=1;
    int i, v;
    for(i=parent[u]; i!=-1; i=e[i].next) {
        v=e[i].to;
        if(vis[v]==0) dfs(v);
    }
}

void solve() {
    g=0;
    int i, j;
    memset(color,0,sizeof(color));
    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++) {
        if(vis[i]==0) {
            g++;
            dfs(i);
        }
    }
    
    for(i=1; i<=n; i++) 
        b[color[i]].push_back(i);
    
    int ans=0;
    for(i=1; i<=g; i++) {
        int maxn=0;
        for(j=0; j<b[i].size(); j++) {
            int v=b[i][j];
            child[c[v]]++;
            if(child[c[v]]>maxn) maxn=child[c[v]];
        }
        
        ans+=b[i].size()-maxn;
        for(j=0; j<b[i].size(); j++) {
            int v=b[i][j];
            child[c[v]]--;
        }
    }
    printf("%d\n",ans);
}

int i, u, v;
int main() {
    scanf("%d%d%d",&n,&m,&k);
    cnt=0;
    memset(parent,-1,sizeof(parent));
    for(i=1; i<=n; i++)
    	scanf("%d",&c[i]);
       
    for(i=0; i<m; i++) {
        scanf("%d%d",&u,&v);
        add(u,v);
       	add(v,u);
    }
        
    solve();
}
