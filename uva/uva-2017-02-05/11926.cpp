#include <bits/stdc++.h>
using namespace std;

const int N = 2000005;
const int M = 1000000;
bitset<N> bs;
int n, m, s, e, tmp, i, j;
bool conflict;
int main() {
	while (scanf("%d %d", &n, &m), n || m) {
		conflict = false;
		for (i = 0; i < n; i++) {
			scanf("%d %d", &s, &e);
			if (!conflict) {
				for (j = 2 * s + 1; j <= 2 * e; j++) {
					if (bs.test(j)) {
						conflict = true;
						break;
					}
					bs.set(j);
				}
			}
		}

		for (i = 0; i < m; i++) {
			scanf("%d %d %d", &s, &e, &tmp);
			if (!conflict) {
				while (true) {
					for (j = 2 * s + 1; j <= 2 * e; j++) {
						if (bs.test(j)) {
							conflict = true;
							break;
						}
						bs.set(j);
					}
					s += tmp, e += tmp;
					if (s > M && e > M) break;
					else if (e > M) e = M;
				}
			}
		}

		if (!conflict) puts("NO CONFLICT");
		else puts("CONFLICT");
		bs.reset();
	}

	return 0;
}
