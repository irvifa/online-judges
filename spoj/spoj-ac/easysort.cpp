#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,N,i,n,c;
    cin>>N;
    for(t=1;t<=N;t++) {
	    cin>>n;
	    int a[n+1];
	    for(i=1;i<=n;i++) {
	    	cin>>a[i];
	    }
	    i=1;
	    c=0;
	    while(i<=n) {
	    	while(a[i]!=i) {
	    		swap(a[a[i]],a[i]);
	    		c++;
	    	}
	    	i++;
	    }
	    cout<<"Case "<<t<<": "<<c<<"\n";
	}
	return 0;
}
