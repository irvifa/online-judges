#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, k, i;
vector<int> c;
int b, tot;
int main() {
    scanf("%d %d",&n,&k);
    c.resize(n);
    tot = 0;
    for(i = 0; i < n; i++) {
        scanf("%d",&c[i]);
    }
    scanf("%d",&b);
    
    for(i = 0; i < n; i++) {
        if(i!=k) tot+= c[i];
    }
    tot/=2;
    if(tot==b) puts("Bon Appetit");
    else printf("%d",b-tot);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

