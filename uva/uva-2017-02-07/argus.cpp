#include<bits/stdc++.h>
using namespace std;

typedef struct {
    int id, p, v;
} Argus;

typedef struct {
    bool operator() (Argus a, Argus b) {
        if(a.v != b.v)
            return a.v > b.v;
        return a.id > b.id;
    }
} cmp;

priority_queue<Argus, vector<Argus>, cmp> pq;
string s;
int id, p, k;
Argus tmp;
int main() {
    while(cin >> s, s!="#") {
        scanf("%d %d", &id, &p);
        tmp.id = id, tmp.p = tmp.v = p;
        pq.push(tmp);
    }
    scanf("%d", &k);
    while(k--) {
        printf("%d\n", pq.top().id);
        tmp = pq.top();
        pq.pop();
        tmp.v += tmp.p;
        pq.push(tmp);
    }
    return 0;
}
