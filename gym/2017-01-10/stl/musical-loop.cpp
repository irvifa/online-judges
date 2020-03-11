#include<bits/stdc++.h>
using namespace std;

int n, i, ans;
bool up, down;
int main() {
	while(scanf("%d", &n), n) {
		vector<int> v;
		v.resize(n+1);
		for(i = 0; i < n; i++)
			scanf("%d", &v[i]);
		down = up = false;
		ans = 0;
		if (v[n-1] < v[0]) up = true;
        else down = true;
        v[n] = v[0];
        for (i=1; i<=n; i++) {
            if (v[i-1]<v[i] && down) {
                ans++;
                down = false; 
                up = true;
            } else if (v[i-1] > v[i] && up) {
                ans++;
                down = true; 
                up = false;
            }
        }
		printf("%d\n", ans);
	}
	return 0;
}
