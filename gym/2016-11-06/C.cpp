#include <bits/stdc++.h>
using namespace std;

bool match(char *a, char * b) {
    if (*a == '\0' && *b == '\0')
        return true;
 
    if (*a == '*' && *(a+1) != '\0' && *b == '\0')
        return false;

    if (*a == *b)
        return match(a+1, b+1);

    if (*a == '*')
        return match(a+1, b) || match(a, b+1);
        
    return false;
}

void solve(char *a, char *b) {
	bool flag = match(a,b);
	if(flag) cout << b << endl;
}

const int SIZE = 100;
int T;
char c[SIZE], reg[SIZE];
string read;
int main() {
	cin >> reg;
	scanf("%d",&T);
	while(T--) {
		cin >> c;
		solve(reg,c);
	}
	return 0;
}
