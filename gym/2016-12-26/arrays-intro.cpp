#include <cbits/stdc++.h>
using namespace std;

const int N = 1000;
int n, i;
int a[N];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d",&n);
    for(i =0; i<n; i++) scanf("%d",&a[i]);
    
    for(i =n-1; i>=0; i--) printf("%d ",a[i]);
    
    return 0;
}
