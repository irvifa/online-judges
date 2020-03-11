#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> v, int n) {
	int st, fin, me;
	st = 0, fin = v.size()-1;
	while(st <= fin) {
		me = st + floor((fin-st)/2);
		if(v[me] < n) st = me+1;
		else if(v[me] == n) return me;
		else fin = me - 1;
	}
	return -1;
}

vector<int> find_duplicates(vector<int> va, vector<int> vf) {
	vector<int> ret;
	
	for(auto e: va) {
		if(binary_search(vf, e)!= -1) ret.push_back(e);
	}
	return ret;
}

int a, f, i, s;
vector<int> va, vf, afs;
// the complexity will be O(N log(M))
int main() {
	cin >> a >> f;
	for(i = 0; i < a; i++)
		cin >> s, va.push_back(s);

	for(i = 0; i < f; i++)
		cin >> s, vf.push_back(s);
	
	sort(va.begin(),va.end());
	sort(vf.begin(),vf.end());
	if(va.size() < vf.size())
		afs = find_duplicates(va, vf);
	else
		afs = find_duplicates(vf, va);
	for(auto e: afs) cout << e << " ";
	return 0;
}
