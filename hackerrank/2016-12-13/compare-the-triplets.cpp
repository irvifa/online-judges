#include <bits/stdc++.h>
using namespace std;

int main(){
    int a0, a1, a2;
    int b0, b1, b2;
    int alice, bob;
    alice = 0, bob = 0;
    cin >> a0 >> a1 >> a2;
    cin >> b0 >> b1 >> b2;
    if(a0 > b0) alice++;
    else if(a0 < b0) bob++;
    if(a1 > b1) alice++;
    else if(a1 < b1) bob++;
    if(a2 > b2) alice++;
    else if(a2 < b2 ) bob++;
    printf("%d %d\n",alice,bob);
    return 0;
}

