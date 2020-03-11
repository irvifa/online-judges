#include <bits/stdc++.h>
using namespace std;

const int N = 105;

int g, p, s, K, x, size;
int winner[N], grand[N][N], score[N];
int i, j, k, pilot;
int main() {
	while (scanf("%d %d", &g, &p), g || p) {
		for (i = 0; i < g; ++i) {
			for (j = 1; j <= p; ++j) {
				scanf("%d", &x);
				grand[i][x] = j;
			}
		}
		scanf("%d", &s);
		for (i = 1; i <= s; ++i) {
			scanf("%d", &K);
			for (j = 1; j <= p; ++j)
				score[j] = 0;
			for (j = 1; j <= K; ++j) {
				scanf("%d", &x);
				for (k = 0; k < g; ++k) {
					pilot = grand[k][j];
					score[pilot] += x;
				}
			}
			
			size = 0;
			winner[size++] = 1;
			for (j = 2; j <= p; ++j) {
				if (score[j] > score[winner[0]]) {
					size = 0;
					winner[size++] = j;
				}
				else if (score[j] == score[winner[0]])
					winner[size++] = j;
			}
			for (j = 0; j < size; ++j) {
				if (j) printf(" ");
				printf("%d", winner[j]);
			}
			puts("");
		}
	}
	
	fflush(stdout);
	return 0;
}
