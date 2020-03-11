#include <bits/stdc++.h>
using namespace std;

#define mp(x,y) make_pair((x),(y))
typedef pair<int,int> pii;
typedef long long int ll;

int n, i, flag, a1, b1, a2, b2;		
ll ans;
priority_queue<pii> pq;

int main() {
	cin >> n;
	for(i=0; i<n; i++){
		cin >> a1 >> b1 >> a2 >>b2;
		if(a1+b1>a2+b2){
			ans-= b1+b2;
			pq.push(mp(a1+b1,a2+b2));
		} else if(a1+b1==a2+b2) {
			ans+= a1-b2;
		} else if(a1>=b2&&a2>=b1) {
			ans+= a1-b2;
		} else if(b1>=a2&&b2>=a1) {
			ans-= b1-a2;
		}
	}
	
	flag=0;
	while(!pq.empty()){
		if(!flag)
			ans+= pq.top().first;
		if(pq.top().second!=-1)
			pq.push(mp(pq.top().second,-1));
		pq.pop();
		flag^= 1;
	}
	cout<< ans <<endl;
	return 0;
}
