#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int n, i, a, f, afs, sum;
vector<int> v;
int main() {
	cin >> n >> f;
	v.resize(n);
	for(i = 0; i < n; i++)
		cin >> v[i];
	sum = 0, afs = 0;
	sort(v.begin(), v.end(), greater<int>());
	for(auto e: v) {
		if(sum >= f) break;
		sum += e, afs++;
	} 
	cout << afs << endl;
	return 0;
}

