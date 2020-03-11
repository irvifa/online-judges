#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
ui n, a, b, tmp;  
bool flag;
int main() {
    while (scanf("%u", &n), n) {
        a = 0, b = 0, tmp = 1;;
        flag = true;
        while (n) {
            if (n & 1) {               
                if (flag) a += tmp;
                else b += tmp;
                flag = !flag;
            }
            tmp *= 2, n /= 2;
        }
        printf("%u %u\n", a, b);
    }
    return 0;
}
