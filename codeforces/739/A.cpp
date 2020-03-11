#include<bits/stdc++.h>
using namespace std;

int n, i;
string s;
int cnt_a, cnt_d;
int main() {
	cin >> n;
	cin >> s;
	cnt_a = 0, cnt_d = 0;
	for (i = 0; i < n; i++){
		if (s[i] == 'A') cnt_a++; 
		else cnt_d++;
	}
		
	if (cnt_a > cnt_d) 
		puts("Anton");
	if (cnt_a < cnt_d) 
		puts("Danik");
	if (cnt_a == cnt_d) 
		puts("Friendship");
	
	return 0;
}
