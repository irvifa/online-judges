#include<bits/stdc++.h>
using namespace std;

const int N = 100010;

vector<int> g[N];
int n, curr_color, color[N];
bool flag;
 
bool dfs(int v, int parent) {
	int i;
    flag = flag && (color[v] == curr_color);
    for(i = 0; i < g[v].size(); i++) {
        if (g[v][i] != parent)
            dfs(g[v][i], v);
    }
}
 
bool solve(int v) {
    int ret, i;
    ret = true;
    for(i = 0; i < g[v].size(); i++) {
        curr_color = color[g[v][i]];
        flag = true;
        dfs(g[v][i], v);
        ret = ret && flag;
    }
    return ret;
}
 
int u, v, root1, root2, i;
bool res1, res2;
int main() {
    scanf("%d", &n);
    for(i = 0; i < n - 1; i++) {
        scanf("%d %d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(i = 0; i < n; i++) scanf("%d", &color[i + 1]);
    
    root1 = -1, root2 = -1;
    for(i = 1; i < n + 1; i++) {
        for (auto &e : g[i]) {
            if (color[e] != color[i]) {
                root1 = e;
                root2 = i;
            }
        }
    }
    if (root1 == -1) {
        cout << "YES\n1";
        return 0;
    }
    
    res1 = solve(root1);
    res2 = solve(root2);
    if (res1)
        cout << "YES\n" << root1;
    else if (res2)
        cout << "YES\n" << root2;
    else
        cout << "NO";
    return 0;
}
