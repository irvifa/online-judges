#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int x1, v1, x2, v2;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(v2 >= v1) puts("NO");
    else if((x2-x1)%(v1-v2) == 0) puts("YES");
    else puts("NO");
    return 0;
}

