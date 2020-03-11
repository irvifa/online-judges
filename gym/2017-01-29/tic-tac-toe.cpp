#include <bits/stdc++.h>
using namespace std;

int xWin, yWin, X, Y;
int i, j, T;
int main(){
	int T;
	cin >> T;
	while( T-- ){
		string S[3];
		cin >> S[0] >> S[1] >> S[2];
		xWin = yWin = 0;
		X = Y = 0;
		if( S[0][0]=='X' && S[1][1]=='X' && S[2][2]=='X' )	xWin++;
		if( S[2][0]=='X' && S[1][1]=='X' && S[0][2]=='X' )	xWin++;
		if( S[0][0]=='X' && S[1][0]=='X' && S[2][0]=='X' )	xWin++;
		if( S[0][1]=='X' && S[1][1]=='X' && S[2][1]=='X' )	xWin++;
		if( S[0][2]=='X' && S[1][2]=='X' && S[2][2]=='X' )	xWin++;
		if( S[0][0]=='X' && S[0][1]=='X' && S[0][2]=='X' )	xWin++;
		if( S[1][0]=='X' && S[1][1]=='X' && S[1][2]=='X' )	xWin++;
		if( S[2][0]=='X' && S[2][1]=='X' && S[2][2]=='X' )	xWin++;
		
		if( S[0][0]=='O' && S[1][1]=='O' && S[2][2]=='O' )	yWin++;
		if( S[2][0]=='O' && S[1][1]=='O' && S[0][2]=='O' )	yWin++;
		if( S[0][0]=='O' && S[1][0]=='O' && S[2][0]=='O' )	yWin++;
		if( S[0][1]=='O' && S[1][1]=='O' && S[2][1]=='O' )	yWin++;
		if( S[0][2]=='O' && S[1][2]=='O' && S[2][2]=='O' )	yWin++;
		if( S[0][0]=='O' && S[0][1]=='O' && S[0][2]=='O' )	yWin++;
		if( S[1][0]=='O' && S[1][1]=='O' && S[1][2]=='O' )	yWin++;
		if( S[2][0]=='O' && S[2][1]=='O' && S[2][2]=='O' )	yWin++;
		
		for(i = 0; i<=2; i++) {
			for(j = 0; j<=2; j++) {
				if( S[i][j] == 'O' )
					Y++;
				if( S[i][j] == 'X' )
					X++;
			}
		}

		if( xWin > 0 && yWin > 0 ) {
			puts("no");
			continue;
		}
		if( xWin > 0 && Y + 1 == X ) {
			puts("yes");
			continue;
		}
		if( xWin > 0 && Y + 1 != X ) {
			puts("no");
			continue;
		}
		if( yWin > 0 && X == Y ) {
			puts("yes");
			continue;
		}
		if( yWin > 0 && X != Y ) {
			puts("no");
			continue;
		}
		if( X == Y || X == Y + 1 ) {
			puts("yes");
			continue;
		}
		else {
			puts("no");
			continue;
		}		
	}
	return 0;
}
