#include <bits/stdc++.h>
using namespace std;

int T,a,b,i;
int main(){   
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%d %d",&a,&b);
        
        if(a%2==0) a++;
        if(b%2==0) b--;
        
        printf("Case %d: ",i);
        
        if(a>b) printf("0\n");
        else printf("%d\n",((a+b)/2)*((b-a+2)/2));
	}
	return 0;
}