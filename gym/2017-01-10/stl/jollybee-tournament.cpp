#include<bits/stdc++.h>
using namespace std;

const int N = 1050;

int n, m, k, ans;
bool mem[N];

bool solve(int x, int y) {
    bool a, b;
    int m;
    if (x + 1 == y) {
        a = mem[x];
        b = mem[y];
    } else {
        m = (x + y) / 2;
        a = solve(x, m);
        b = solve(m + 1, y);
    }
    
    if ((!a || !b) && (a || b)) ans++;
    
    return a || b;
}

int t;
int main() {
	scanf("%d", &t);
	while(t--) {
	    scanf("%d %d", &n, &m);
	    memset(mem, true, sizeof(mem));
	    while (m--) {
	        scanf("%d", &k);
	        mem[k] = false;
	    }
	    ans = 0;
	    solve(1, (1 << n));
	    printf("%d\n", ans);
	}
	return 0;
}
