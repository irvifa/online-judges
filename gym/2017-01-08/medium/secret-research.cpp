#include<bits/stdc++.h>
using namespace std;

int n, len;
string s; 
int main() {
	scanf("%d", &n);
	while(n--) {
		cin >> s;
		len = s.length();

		if (s == "1" || s == "4" || s == "78")
			printf("+\n");
		else if (s[len - 1] == '5' && s[len - 2] == '3')
			printf("-\n");
		else if (s[0] == '9' && s[len - 1] == '4')
			printf("*\n");
		else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
			printf("?\n");
		else
			printf("+\n");
	}
	return 0;
}
