#include <bits/stdc++.h>
using namespace std;

int n;
int xa,xb,ya,yb;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d %d", &xa, &ya, &xb, &yb);
        printf("%d %d\n",2*xb-xa,2*yb-ya);
    }
    return 0;
}

