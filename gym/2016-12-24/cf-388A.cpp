#include <bits/stdc++.h>  
using namespace std; 

const int N = 100003;
int a[N];  
int i, n, j, sum; 
int main() { 
    scanf("%d",&n);  
    sum=n/2;  
    if(n%2!=0) sum--, a[sum]= 3;
    
   	for(j=0;j<sum;j++) a[j]=2;
   	
    if(n%2!=0) sum++;
    
    printf("%d\n",sum);  
    for(i=0;i<sum;i++)   
    	printf("%d ",a[i]);  

	return 0;  
}  
