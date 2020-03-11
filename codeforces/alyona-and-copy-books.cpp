#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, sum;
ll a, b, c, item;    
int main() {
    scanf("%d", &n);
    scanf("%I64d %I64d %I64d", &a, &b, &c);
    if(n % 4 == 0 && n != 0) {
        puts("0");
        return 0;
    }
    
    sum=n%4;
    
    if(sum == 3) {
        item = min(b+c, min(a, 3*c));
        printf("%I64d\n",item);
    } else if(sum == 2) {
        item = min(2*a, min(b, 2*c));
        printf("%I64d\n",item);
    } else if(sum == 1) {
        item=min(a*3, min(a+b, c));
        printf("%I64d\n",item);
    }
    return 0;
}
