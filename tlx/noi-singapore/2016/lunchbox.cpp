#include <bits/stdc++.h>
using namespace std;

int i, j, a, f, s;
vector<int> wt, v;
int main() {
	scanf("%d %d", &a, &f);
	for(i =0; i < f; i++) {
		scanf("%d",&s);
		wt.push_back(s);
	}
	
	sort(wt.begin(), wt.end());
	s =  0;
	for(auto &e: wt) {
		if(e <= a) s++, a -= e;
	}
	
	printf("%d\n", s);
	return 0;
}
