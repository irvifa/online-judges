#include <bits/stdc++.h>
using namespace std;

int n, t, q, x1, b1, x2, b2;
int main() {
    scanf("%d",&n);
    while (n--) {
        scanf("%d",&t);
        scanf("%d",&q);
        while (t--) {
            scanf("%d %d %d %d", &x1, &b1, &x2, &b2);
            if ((x1 + b1) % 2 == (x2 + b2) % 2) {
                if (x1 == x2 && b1 == b2) {
                    puts("0");
                } else if (abs(x1 - x2) == abs(b1 - b2)) {
                    puts("1");
                } else {
                    puts("2");
                }
            } else {
                puts("no move");
            }
        }
    }
    return 0;
}