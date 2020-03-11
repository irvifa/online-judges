#include <bits/stdc++.h>
using namespace std;

const int N = 10000;

typedef struct {
    int v, col, row;
} element;

struct cmp {
    bool operator() (element a, element b) {
        if(a.col != b.col)
            return a.col > b.col;
        return a.row > b.row;
    }
};

priority_queue<element, vector<element>, cmp> pq;
int n, m, idx;
int i, j, k;
element p[N];
int main() {
    while(scanf("%d %d", &n, &m) == 2) {
        memset(p, 0, sizeof(p));
        for(i = 0; i < n; i++) {
            scanf("%d", &k);
            for(j = 0; j < k; j++)
                scanf("%d", &p[j].col);
            for(j = 0; j < k; j++)
                scanf("%d", &p[j].v);
            for(j = 0; j < k; j++)
                p[j].row = i + 1, pq.push(p[j]);

        }

        printf("%d %d\n", m, n);
        
        for(i = 1; i <= m; i++) {
            idx = 0;
            
            while(!pq.empty() && pq.top().col == i) {
                p[idx++] = pq.top();
                pq.pop();
            }
            
            printf("%d", idx);
            
            for(j = 0; j < idx; j++)
                printf(" %d", p[j].row);
            
            puts("");
            
            for(j = 0; j < idx; j++) {
                if(j)   putchar(' ');
                printf("%d", p[j].v);
            }
            puts("");
        }
    }
    return 0;
}