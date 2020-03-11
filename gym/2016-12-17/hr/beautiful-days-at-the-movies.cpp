#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverseNum(int n) {
    int rev = 0, rem;
    while(n != 0) {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    return rev;
}

int a, b, c, n, ans;
int main() {
    scanf("%d %d %d", &a, &b, &n);
    ans = 0;
    while(a <= b) {
        c = reverseNum(a);
        if(abs(a-c)%n==0) ans++;
        a++;
    }
    printf("%d", ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

