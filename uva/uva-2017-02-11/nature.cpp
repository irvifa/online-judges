#include <bits/stdc++.h>
using namespace std;

int n, m, ans, i, num;
vector<int> p, sz;
string a, b;
map<string, int> mp;
void build_set(int n) {
    for(i=1;i<=n;++i)
        p[i]=i, sz[i]=1;
    ans=1;
}

int find_set(int i) {
    return (p[i]==i)?i:p[i]=find_set(p[i]);
}

bool is_same_set(int i, int j) {
    return find_set(i)==find_set(j);
}
void Union(int i, int j) {
    if(!is_same_set(i, j)) {
        sz[find_set(j)]+=sz[find_set(i)];
        p[find_set(i)]=p[find_set(j)];
        ans=max(sz[find_set(j)], ans);
    }
}

int main() {
    p.clear(), sz.clear();
    p.assign(33333, 0), sz.assign(33333, 0);
    while(1) {
        scanf("%d %d", &n, &m);
        if(!n && !m)
            break;
        build_set(n+1);
        num=1;
        while(n--) {
            cin >> a;
            mp[a]=num++;
        }
        while(m--) {
            cin >> a >> b;
            Union(mp[a], mp[b]);
        }
        printf("%d\n", ans);
    }
    return 0;
}