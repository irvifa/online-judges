#include <bits/stdc++.h>
using namespace std;

const int NumMoves = 4;
const int MaxGridSize = 52;

int xChange[] = {1, 0, -1, 0};
int yChange[] = {0, 1, 0, -1};


bool hasBumper[MaxGridSize][MaxGridSize];
int bumperCost[MaxGridSize][MaxGridSize];
int bumperScore[MaxGridSize][MaxGridSize];

int main() {
    int a, b;
    int j, i, wallCost, numBumper;
    int overallScore, score;
    int ballX, ballY, dir, lifetime;
    
    scanf("%d %d", &a, &b);
    scanf("%d %d", &wallCost, &numBumper);

    for (i = 0; i < b; ++i)
        for (j  = 0; j < a; ++j)
            hasBumper[i][j] = false;

    while (numBumper--) {
        scanf("%d %d", &j, &i);
        --j; --i;
        hasBumper[i][j] = true;
        scanf("%d %d", &bumperScore[i][j], &bumperCost[i][j]);
    }
    
    overallScore = 0;
    
    while (cin >> ballX >> ballY >> dir >> lifetime) {
        score = 0;
        --ballX; --ballY;
        while (--lifetime > 0) {
            int newX = ballX + xChange[dir], newY = ballY + yChange[dir];
            if (newX <= 0 || newX >= a - 1 || newY <= 0 || newY >= b - 1) {
                lifetime -= wallCost;
                dir = (dir + 3) % NumMoves;
            } else if (hasBumper[newY][newX]) {
                lifetime -= bumperCost[newY][newX];
                score += bumperScore[newY][newX];
                dir = (dir + 3) % NumMoves;
            } else {
                //cout << "asem2 jawa :(" << endl;
                ballX = newX;
                ballY = newY;
            }
        }
        
        cout << score << '\n';
        overallScore += score;
    }
    
    cout << overallScore << '\n';
}
