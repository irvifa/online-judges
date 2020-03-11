#include<bits/stdc++.h>
using namespace std;

const int N = 10;

bool check(vector<int> &v) {
	bool dc, ac;
	int i, a;
	dc = false, ac = false;
	
	a = v[0];
	for (i = 1; i < N; i++) {
		if (a < v[i]) ac = true;
		else dc = true;
		a = v[i];
	}
	
	return ac&&dc;
}

int n, i, a;
int main() {
	scanf("%d", &n);
	puts("Lumberjacks:");
	while(n--) {
		vector<int> v;
		for(i = 0; i < N; i++) {
			scanf("%d", &a);
			v.push_back(a);
		}
		
		//cout << "asem2 jawa " + n << endl;
	
		if(check(v)) puts("Unordered");
		else puts("Ordered");
	}
	return 0;
}
