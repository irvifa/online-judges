#include <bits/stdc++.h>
using namespace std;

const int N = 105;
const int M = 5;

int g[N][M];

int mapping(char c) {
    if(c == 'r')    return 0;
    if(c == 'o')    return 1;
    if(c == 'y')    return 2;
    if(c == 'g')    return 3;
    if(c == 'b')    return 4;
    return -1;
}

int i, j, k, n, m, mn, afs, tmp;
string s;
int main() {
    n = 0;
    while(getline(cin,s) && s[0] != '#') {
        if(s[0] == 'e') {
            mn = 0xfffff;
            for(i = 0; i < n; i++) {
                tmp = 0;
                for(j = 0; j < n; j++) {
                    for(k = 0; k < 5; k++) {
                        if(g[i][k] != g[j][k])
                            tmp++;
                    }
                }
                if(tmp < mn)
                    mn = tmp, afs = i+1;
            }
            printf("%d\n", afs);
            n = 0;
        } else {
            for(i = 0; i < 5; i++) {
                g[n][mapping(s[i*4])] = s[i*4+2];
            }
            n++;
        }
    }
    return 0;
}
