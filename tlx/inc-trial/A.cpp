#include<bits/stdc++.h>
using namespace std;

int N, T, i, tmp, ans, j;
int main(){
	cin >> T;
	for(j=1; j<=T; j++) {
		cin >> N;
		ans =0;
		for(i=0; i<N; i++) {
			cin >> tmp;
			if(tmp<60) ans++;
		}
		cout << "Case #" <<j << ": " << ans << endl; 
	}
	return 0;
}
