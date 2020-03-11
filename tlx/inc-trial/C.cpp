#include<bits/stdc++.h>
using namespace std;

int N, T, i, ans4, ans5, ans6, j;
string tmp;
int main(){
	cin >> T;
	for(j=1; j<=T; j++) {
		cin >> N;
		ans4 =0;
		ans5 =0;
		ans6 =0;
		for(i=0; i<N; i++) {
			cin >> tmp;
			if(tmp.length()==4) ans4++;
			else if(tmp.length()==5) ans5++;
			else if(tmp.length()==6) ans6++;
		}
		cout << "Case #" <<j << ": " << ans4 << " " << ans5 << " " << ans6 << endl; 
	}
	return 0;
}

