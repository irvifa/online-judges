#include<bits/stdc++.h>
using namespace std;

int t, n, k, i, j, ans;
int main() {
	cin >> t;
	for(i=1; i<=t; i++){
		ans = 0;
		vector<int> v;
		cin >> n >> k;
		v.resize(n);
		for(j=0; j<n; j++) 
			scanf("%d",&v[j]);
			
		sort(v.begin(),v.end());
		
		for(j=0; j<n-1; j++)
			if(v[j+1]-v[j]>k)
				ans++;
		// cout << "nyan " << ans << endl;
		ans++;
		printf("Case #%d: %d\n",i,ans);
	}
	return 0;
}
