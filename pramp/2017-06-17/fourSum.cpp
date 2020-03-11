#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

class Solution {
	public:
		vector<vi> fourSum(vi &v, int n) {
			sort(v.begin(),v.end());
			set<vi> s;
			int sz, r, lo, hi, i, j;
			
			sz = v.size();
			for (i = 0; i <= sz - 4; i++) {
				for (j = i + 1; j <= sz - 3; j++) {
					r = n - (v[i] +v[j]);

					lo = j + 1, hi = sz - 1;

					while (lo < hi) {
						if (r == v[lo]+v[hi]) {
							vector<int> tmp = { v[i], v[j], v[lo], v[hi]};
							s.insert(tmp);
							lo++, hi--;
						} else if (v[lo]+v[hi] < r) {
							lo++;
						} else if (v[lo]+v[hi] > r) {
							hi--;
						}
					}
				}
			}
			vector<vi> result(s.begin(), s.end());
			return result;			
		}
};

int main() {
	vi test = {2, 7, 4, 0, 9, 5, 1, 3};
	int n = 20;
	Solution s;
	vector<vi> afs = s.fourSum(test, n);
	for(auto &v: afs) {
		for(auto &e: v) {
			cout << e << " ";
		}
		cout << endl;
	}
	return 0;
}