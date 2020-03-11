#include <bits/stdc++.h>
using namespace std;

int i, n;
string s, ans;
int a, b, c, d;
queue <char> q;
char ch [4] = {'A','C','G','T'};
int main() {
	cin >> n;
	cin >> s;
	a =0; b=0, c=0, d=0;
	for(i = 0; i<n; i++) {
		if(s[i] == 'A') a++;
		else if(s[i] == 'C') b++;
		else if(s[i] == 'G') c++;
		else if(s[i] == 'T') d++;
		q.push(s[i]);
	}
	while(!q.empty()){
		int tmp = q.front();
		if(tmp!='?') ans += tmp;
		else {
			int idx = min(min(a,b),min(c,d));
			if(idx == a){
				ans+=ch[0];
				a++;
			} else if(idx == b){
				ans+=ch[1];
				b++;
			} else if(idx == c){
				ans+=ch[2];
				c++;
			} else {
				ans+=ch[3];
				d++;
			}
		}
		q.pop(); 
	}
	if(a==b&a==c&&a==d&&b==c&&b==d&&c==d)
		cout << ans << endl;
	else 
		puts("===");
	return 0;
}
