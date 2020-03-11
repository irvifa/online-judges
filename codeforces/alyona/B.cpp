#include<bits/stdc++.h>
using namespace std;

const int MAX = 105;

int n, m, i, ans;
int a[MAX];
int sum, l, r;
int main() {
    scanf("%d %d",&n,&m);
    
    for(i= 1; i<= n; i++)   
    	scanf("%d",&a[i]);
    
    ans = 0;
    while(m--) {
        scanf("%d %d",&l,&r);
        sum= 0;
        for(i=l; i<=r; i++)   
        	sum += a[i];
        if(sum > 0) 
        	ans += sum;
    }
    
    printf("%d\n",ans);
    
    return 0;
}
