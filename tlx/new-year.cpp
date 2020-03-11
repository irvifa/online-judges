#include<bits/stdc++.h>
using namespace std;

const int N = 100000;

int check(int a[],int x,int n) {
	for(int i=x;i>=0;i--)
		if(a[i]==x)
			return i;
    return 0;
}

int t, n, z, i, j, y, x;
int bribe, flag, temp;
int a[N], b[N];
int main() {
	cin>>t;
	a[0]=0;
	while(t--) {
		bribe=0;
		cin>>n;
		
		for(i=0;i<=n;i++)
			b[i]=0;
	
		for(i=1;i<=n;i++)
			cin>>a[i];
		
		flag=1;
		z=0;

		j=n;
		for(i=n; i>0; i--) {
				y=1;
				while(y) {
					if(a[j]!=i) {
						x=check(a,j,n);
						temp=a[x+1];
						a[x+1]=a[x];
						a[x]=temp;
						bribe++;
						b[j]++;
						if(b[j]>2) {
							cout<<"Too chaotic"<<endl;
							z=1;
							i=-1;
							break;
						}
						if(z==1) 
							break;
					}
		            
		            if(z==1) 
		            	break;
					
					if(a[j]==i) {
						y=0;
						j--;
					}
				}

			}

	if(z==0)
		cout<<bribe<<endl;
	}
	return 0;
}
