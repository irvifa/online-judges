#include <bits/stdc++.h>
using namespace std;

const int MR = 20;
const int MC = 8;


char maze[MR][MC];
bool full[MR] = {true};

void down(int a, int b, int row) {
	while(maze[a][b]=='0' && a<=row) {
		maze[a][b]='1';
		maze[a-1][b]='0';
		a++;
	}
}

int row, col, bottom;
bool flag;
string tmp;
int main() {
	cin >> row >> col;
	for(int i=0; i<row; i++) {
		cin >> tmp;
		for(int j =0; j< col; j++) {
			maze[i][j] = tmp[j];
		}
	}
	
	flag= false;
	do {
		for(int i =0; i<row; i++) {
			for(int j =0; j<col; j++) {
				if(maze[i][j]=='0')
					full[i]=false;
			}
			if(full[i]) {
				flag = true;
				bottom=i;
				for(int j=0; j<col; j++) maze[i][j]='0';
			}
		}
		for(int j=0; j<col; j++) {
			for(int i=bottom-1; i>0; i--) {
				if(maze[i][j]=='1') down(i+1,j,row);
			}
		}
	}while(flag);
	
	for(int i =0; i<row; i++) {
		for(int j =0; j<col; j++) {
			cout << maze[i][j];
		}
		cout << endl;
	}
	return 0;
}
