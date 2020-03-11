#include <bits/stdc++.h>
using namespace std;

void rotate(int x[][50], int n) {
    int y[50][50], i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            y[j][n-i-1] = x[i][j];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            x[i][j] = y[i][j];
}

int n, m, i, flag, rr, mov, x, y, j, k;
int main() {
    while(scanf("%d", &n), n) {
        map<string, int> r;
        m = 2*n;
        int board[50][50] = {};
        flag = -1;
        char cmd[3];
        for(i = 0; i < m; i++) {
            scanf("%d %d %s", &x, &y, cmd);
            if(flag != -1)  continue;
            x--, y--;
            if(cmd[0] == '+')
                board[x][y] = 1;
            else    board[x][y] = 0;
            string s = "";
            for(j = 0; j < n; j++)
                for(k = 0; k < n; k++)
                    s += (board[j][k]+'0');
            
            if(r[s] == 1) {
                flag = i&1;
                mov = i;
                continue;
            }
            for(rr = 0; rr < 4; rr++) {
                string s = "";
                for(j = 0; j < n; j++)
                    for(k = 0; k < n; k++)
                        s += (board[j][k]+'0');
                r[s] = 1;
                rotate(board, n);
            }
        }
        if(flag == -1)
            puts("Draw");
        else
            printf("Player %d wins on move %d\n", !flag+1, mov+1);
    }
    return 0;
}
