#include <bits/stdc++.h>
using namespace std;

int king, queen, to_queen, d;
int main() {
    while (scanf("%d %d %d", &king, &queen, &to_queen) == 3) {
        if (king == queen) {
            puts("Illegal state");
            continue;
        }
    
        if (((to_queen - queen) % 8 != 0 && to_queen / 8 != queen / 8) || queen == to_queen) {
            puts("Illegal move");
            continue;
        }
        
        if (((king - queen) % 8 == 0 && (king - to_queen) % 8 == 0) || (king / 8 == queen / 8 && king  / 8 == to_queen / 8)) {
            if (king <= max(queen, to_queen) && king >= min(queen, to_queen)) {
                puts("Illegal move");
                continue;
            }
        }
        
        d = max(king, to_queen) - min(king, to_queen);
        
        if (d == 8 || (d == 1 && king / 8 == to_queen / 8)) {
            puts("Move not allowed");
            continue;
        }
        
        if ((king == 0 && to_queen == 9) || (king == 7 && to_queen == 14) || (king == 56 && to_queen == 49) || (king == 63 && to_queen == 54)) puts("Stop");
        else puts("Continue");
    }
}