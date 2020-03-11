#include <bits/stdc++.h>
using namespace std;

int n, k, x, i, r, idx, lst;
map<int,int> m; 
int main(){
	cin >> k >> n;
	
	for(i=0; i<n; i++){
		cin>>x;
		m[x]++;
	}
	
	for(i=1; i<k; i++) {
		m[i]++;
		r=k, lst=INT_MAX;
		
		while(r) {
			idx = min(lst-1,r);
			auto it=m.upper_bound(idx);
			if(it==m.begin()){
				cout << i << endl;
				return 0;
			}
			--it;
			if(r/it->first<=it->second) r%=it->first;
			else r-=it->first*it->second;
			lst=it->first;
		}
		
		if(--m[i]==0) m.erase(i);
	}
	
	cout<<"Greed is good"<<endl;
	return 0;
}
