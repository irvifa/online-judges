#include<bits/stdc++.h>
using namespace std;

#define MAX 1<<21

int i,j,m[100110], N;
bool a[MAX];
int main(){	
	for(i=2;i<=1140;i++)
		if(!a[i])
			for(j=i*i;j<=MAX;j+=i)
				a[j]=1;
	j=1;
	for(i=2;j<100001;i++)
		if(!a[i]) 
			m[j++]=i;
	
	cin >> N;
	while (N--) {
		cin >> j;
		cout<<m[j]<< endl;
	}
	return 0;
}

