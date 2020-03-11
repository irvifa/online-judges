#include<bits/stdc++.h>
using namespace std;

int n, i;
int x1, y1, x2, y2;
int main() {
    scanf("%d", &n);
    puts("YES");
    for(i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", ((12 + 2 * (x1 % 2) + (y1 % 2)) % 4) + 1);
    }
    return 0;
}
