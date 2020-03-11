#include <bits/stdc++.h>
using namespace std;

int n, q, tmp, i, lo, hi;
vector<int> v;
int main() {
	scanf("%d",&n);
	while(n--) {
		scanf("%d", &tmp);
		v.push_back(tmp);	
	}
	scanf("%d",&q);
	while(q--) {
		scanf("%d",&i);
        lo = lower_bound (v.begin(), v.end(), i)-v.begin()+1;
		if(v[lo-1]==i) {
			printf("Yes %d\n",lo);
		} else {
			printf("No %d\n",lo);
		}
	}
	return 0;
}