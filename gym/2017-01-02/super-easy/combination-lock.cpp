#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
int main() {
    while (~scanf("%d %d %d %d", &a, &b, &c, &d),(a||b||c||d)) {
        printf("%d\n", 1080 + ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9);
    }
    return 0;
}
