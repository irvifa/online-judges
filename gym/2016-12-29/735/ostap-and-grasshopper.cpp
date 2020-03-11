#include <bits/stdc++.h>
using namespace std;

bool solve(string s, int k) {
	int i, start, x;
	bool flag = false;
	
	for(i = 0; i < s.size(); i++)	
		if(s[i] == 'G')
			start = i;
	
	x = start;
	while(x >= 0){
		if(flag) break;
		if(s[x] == '#') break;
		if(s[x] == 'T') flag = true;
		x -= k;
	}
	
	x = start;
	while(x < s.size()){
		if(flag) break;
		if(s[x] == '#') break;
		if(s[x] == 'T') flag = true;
		x += k;
	}
	
	return flag;
}

int n, k;
string s;
int main() {
	scanf("%d %d", &n, &k);
	cin >> s;	
	if(solve(s, k)) puts("YES");
	else puts("NO");
	
	return 0;
}
