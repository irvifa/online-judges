#include<bits/stdc++.h>
using namespace std;

const int N = 14;
bool board[N][N];

int ans, n;

void solve(int col, int rw, int ld, int rd) {
	if ((((1 << n) - 1) & rw) == ((1 << n) - 1)) {
		ans++;
		return;
	}

	int pos = ((1 << n) - 1) & ~(rw | ld | rd);
	for (int tryRow = 0; tryRow < n; tryRow++) {
		if (1 & (pos >> tryRow) & board[tryRow][col]) {
			solve(col + 1, rw | (1 << tryRow), (ld | (1 << tryRow)) << 1,
					(rd | (1 << tryRow)) >> 1);
		}
	}
}


char ch;
int tc, i, j;
int main() {
	tc = 0;
	while (scanf("%d", &n), n) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				scanf("%c", &ch);
				board[i][j] = ch == '.' ? 1 : 0;
				if (ch == '\n')
					j--;
			}
		}
		ans = 0;
		solve(0, 0, 0, 0);
		printf("Case %d: %d\n", ++tc, ans);
	}

	return 0;
}
