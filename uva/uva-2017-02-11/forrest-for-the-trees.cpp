#include <bits/stdc++.h>
using namespace std;

const int N = 26;

char g[N][N], u[N]; 
bitset <N> p;
int flag, tot;

void dfs(int nd, int p) {
    u[nd] = 1;
    if(flag)   return;
    int i;
    tot++;
    for(i = 0; i < N; i++) {
        if(g[nd][i] && u[i] && i != p)
            flag = 1;
        if(g[nd][i] && u[i] == 0)
            dfs(i, nd);
    }
}

int t, i, acorn, tree;
string s;    
int main() {
    scanf("%d", &t);
    while(getchar() != '\n');
    while(t--) {
        memset(g, 0, sizeof(g));
        memset(u, 0, sizeof(u));
        p.reset();
        
        while(cin >> s, s[0] != '*') {
            g[s[1]-'A'][s[3]-'A'] = 1;
            g[s[3]-'A'][s[1]-'A'] = 1;
        }
        
        cin >> s;
        for(auto &e: s) {
            if(e >= 'A' && e <= 'Z') {
                p.set(e-'A');
            }
        }
        
        tree = 0, acorn = 0;
        for(i = 0; i < N; i++) {
            if(p.test(i) && u[i] == 0) {
                flag = 0, tot = 0;
                dfs(i, -1);
                if(flag == 0 && tot > 1)
                    tree++;
                if(tot == 1)
                    acorn++;
            }
        }
        printf("There are %d tree(s) and %d acorn(s).\n", tree, acorn);
    }
    return 0;
}