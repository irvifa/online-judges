#include <bits/stdc++.h>
using namespace std;

vector<int> find_duplicates(vector<int> va, vector<int> vf) {
	vector<int> ret;
	int i, j;
	i = j = 0;

	while(i < va.size() && j < vf.size()) {
		if(va[i] == vf[j]) {
			ret.push_back(va[i]);
			i++, j++;
		} else if (va[i] < vf[j]) {
			i++;
		} else {
			j++;
		}
	}
	return ret;
}

int a, f, i, s;
vector<int> va, vf, afs;
// the complexity will be O(N+M)
int main() {
	cin >> a >> f;
	for(i = 0; i < a; i++)
		cin >> s, va.push_back(s);

	for(i = 0; i < f; i++)
		cin >> s, vf.push_back(s);
	
	sort(va.begin(),va.end());
	sort(vf.begin(),vf.end());
	afs = find_duplicates(va, vf);
	for(auto e: afs) cout << e << " ";
	return 0;
}
