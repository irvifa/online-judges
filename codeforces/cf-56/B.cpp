#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e3+5;

int i, j, l, r, n;
int a[MAX];
bool flag;    
int main(){
    scanf("%d", &n);
    for(i=1; i<=n; i++) 
		scanf("%d",&a[i]);
        
	i=1;
        
	while(a[i]==i && i<=n) i++;
        
	l=i;
	j=n;
        
	while(a[j]==j && j>=1) j--;
        
	r=j;
	flag=true;
        
	while(j>=l && i<=r && flag) {
		if(a[i]!=j || a[j]!=i) 
			flag=false;
		i++;
		j--;
	}
        
	i--;
	j++;
        
	if(l>n && r<1) flag=false;
	if(!flag) l=r=0;
	cout << l << " " << r << endl;    
    return 0;
}
