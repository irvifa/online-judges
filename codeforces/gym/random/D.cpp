#include <bits/stdc++.h>
using namespace std;

int Board[1010][1010];
int N, M, T;
int Q_dir[8][2] = {-1,-1, 0,-1,  1,-1,  1,0, 1, 1, 0,1, -1,1, -1,0};

int K_dir[8][2] = {-2,-1, -2,1, -1,-2, -1,2, 1,-2, 1,2, 2,-1, 2,1};

bool out_of_bound(int i, int j) {
	if (i < 1 || i > N) return true;
	if (j < 1 || j > M) return true;
	return false;
}


void Queen_occupied(int row, int col) {
	for (int i = 0; i < 8; i++) {
		
		int pos_x = row, pos_y = col;
		pos_x += Q_dir[i][0];
		pos_y += Q_dir[i][1];
		while (!out_of_bound(pos_x, pos_y)) {
		
			if (Board[pos_x][pos_y] != 3 && Board[pos_x][pos_y] != 2 && Board[pos_x][pos_y] != 1) {
				Board[pos_x][pos_y] = -1;
			
			} else {
				break;
			}
			pos_x += Q_dir[i][0];
			pos_y += Q_dir[i][1];
		}
	}
}

void Knight_occupied(int row, int col) {
	for (int i = 0; i < 8; i++) {
		int pos_x = row, pos_y = col;
		pos_x += K_dir[i][0];
		pos_y += K_dir[i][1];
		if (!out_of_bound(pos_x, pos_y)) {
			if (Board[pos_x][pos_y] == 0)
				Board[pos_x][pos_y] = -1;
		}
	}
}


void cal_safe() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (Board[i][j] == 1) {
				Queen_occupied(i, j);
			} else if (Board[i][j] == 2) {
				Knight_occupied(i, j);
			}
		}
	}
}

int main() {
	while (scanf("%d %d", &N, &M)) {
		if (N == 0 && M == 0) break;
		T++;
		memset(Board, 0, sizeof(Board));
		int k, r, c, count = 0;
		for (int i = 1; i <= 3; i++) {
			scanf("%d", &k);
			for (int j = 1; j <= k; j++) {
				scanf("%d %d", &r, &c);
				Board[r][c] = i;
			}
		}
		cal_safe();
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				if (Board[i][j] == 0)
					count++;
			}
		}
		printf("Board %d has %d safe squares.\n", T, count);
	}
}
