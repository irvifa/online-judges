#include<bits/stdc++.h>
using namespace std;

int T, k, i, j, ans;
int main() {
	cin >> T >> k;
	vector<int> v;
	v.resize(T);
	for(i=0;i<T;i++) {
		cin >> v[i];
	}
	j=0;
	ans=0;
	for(i=1;i<T;i++) {
		if(v[i]+v[j]<k) {
			ans+= k-v[j]-v[i];
			v[i] = k-v[j];
		}
		j++;
		//cout << v[i] << endl;
	}
	cout << ans << endl;
	for(i=0;i<T;i++) {
		cout << v[i] << " ";
	}
	return 0;
}
