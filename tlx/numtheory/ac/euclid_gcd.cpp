#include<bits/stdc++.h>
using namespace std;

int euclid(int a, int b){
	while(a!=b) {
		if(a>b)
		a=a-b;
		else
		b=b-a;
		
	}
	return a;
}

int N, a, b;
int main(){
	cin >> N;
	while (N--) {
		cin >> a >> b;
		cout<<euclid(a,b)<< endl;
	}
	return 0;
}

