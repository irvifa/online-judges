#include <bits/stdc++.h>
using namespace std;

// Brain's photos

bool flag;
int i, row, col;
char curr;
int main() {
	scanf("%d %d",&row,&col);
	flag = true;
	while(row--) {
		for(i=0; i<col; i++) {
			if(curr=='W'||curr=='B') flag = true;
		}
	}
	if(flag) cout << "#Black&White" << endl;
	else cout << "#Color" << endl;
	return 0;
}
