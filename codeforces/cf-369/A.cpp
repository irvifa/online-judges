#include <bits/stdc++.h>
using namespace std;

const int ROW = 5;
const int COL = 1000;
const int PAIR = 2;

char seat[COL][ROW];
int n, i, j;
bool is_pos;
int main() {
	scanf("%d",&n);
	for(i=0; i<n; i++)
		for(j=0; j< ROW; j++)
			cin >> seat[i][j];
	
	is_pos = false;
	for(i=0; i<n; i++) {
		for(j=0; j<PAIR && !is_pos; j++) {
			if(seat[i][j*3] == 'O' && seat[i][j*3+1] == 'O') {
				is_pos = true;
				seat[i][j*3] = '+';
				seat[i][j*3+1] = '+';
				break;
			}
		}
	}
	
	if(is_pos) {
		printf("YES\n");
		for(i=0; i<n; i++) {
			for(j=0; j<ROW; j++) {
				cout << seat[i][j];
			}
			printf("\n");
		}
	} else printf("NO");
	
	return 0;
}
