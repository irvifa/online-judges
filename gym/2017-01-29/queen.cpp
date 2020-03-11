#include <bits/stdc++.h>
using namespace std;

int a1, b1, a2, b2;
int main() {
    while(scanf("%d %d %d %d",&a1,&b1,&a2,&b2),a1,b1,a2,b2){
        if(a1 == a2 && b1 == b2){
            puts("0");
        } else if(a1 == a2 || b1 == b2){
            puts("1");
        } else if((((a1-a2)*(a1-a2))-((b1-b2)*(b1-b2))) == 0){
            puts("1");
        } else {
            puts("2");
        }
    }
    return 0;
}