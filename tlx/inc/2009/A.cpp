#include <bits/stdc++.h>
using namespace std;

int T, N, M, i, a, j, nyan;
int main() {
	scanf("%d",&T);
	while(T--) {
		scanf("%d %d",&N,&M);
		map <int, int> m;
		vector<int> v (N,0);
		while(M--) {
			for(j=0; j<N; j++) {
				cin >> a;
				v[j]+=a;
			}
		}
		for(i=0;i<N;i++) {
			m.insert(make_pair(v[i],i));
		}
		sort(v.begin(),v.end());
		map<int,int>::iterator it;
		it = m.find(v[N-1]);
  		if (it != m.end()) nyan = it->second;
  		nyan++;
  		printf("%d\n",nyan);
	}
	return 0;
}