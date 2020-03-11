#include <bits/stdc++.h>
using namespace std;

const int DIV = 2;
int N, i;
int main() {
	scanf("%d",&N);
	vector<int> v;
	v.resize(N);
	for(i=0;i<N;i++)
		scanf("%d",&v[i]);
	sort(v.begin(),v.end());
	if(N%DIV==1) {
		int ans = v[N/DIV];
		printf("%.2f\n",ans);
	} else {
		int a = N/DIV; 
		int b = N/DIV+1;
		a--; b--;
		double ans = (v[a]+v[b])/2.0;
		printf("%.2f\n",ans);
	}
	return 0;
}
