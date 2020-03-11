#include<bits/stdc++.h>
using namespace std;

const int BOARD = 8;
const int HALF = 4;

struct piece {
	char kind;
	int x, y;
};

int n;
int a, b;
piece nearest[BOARD];

int dist(int x1, int y1, int x2, int y2) {
	return max(abs(x1 - x2), abs(y1 - y2));
}

void update(piece& was, piece& cur) {
	if (was.kind == '?' || dist(a, b, cur.x, cur.y) < dist(a, b, was.x, was.y))
		was = cur;
}

int get_direction(const piece& cur) {
	if (cur.x == a && cur.y < b) return 0;
	if (cur.x == a && cur.y > b) return 1;
	
	if (cur.y == b && cur.x < a) return 2;
	if (cur.y == b && cur.x > a) return 3;
	
	if ((cur.y - b) == (cur.x - a) && cur.x < a) return 4;
	if ((cur.y - b) == (cur.x - a) && cur.x > a) return 5;
	
	if ((cur.y - b) == (a - cur.x) && cur.y < b) return 6;
	if ((cur.y - b) == (a - cur.x) && cur.y > b) return 7;
	
	return -1;
}

int i, dir;
bool ans;
int main() {
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	for (i = 0; i < 8; i++)
		nearest[i].kind = '?';
		
	for (i = 0; i < n; i++) {
		piece cur;
		cin >> cur.kind >> cur.x >> cur.y;
		dir = get_direction(cur);
		if (dir >= 0)
			update(nearest[dir], cur);
	}
	
	ans = false;
	
	for (i = 0; i < HALF; i++)
		if (nearest[i].kind == 'R' || nearest[i].kind == 'Q')
			ans = true;
	
	for (i = 4; i < BOARD; i++)
		if (nearest[i].kind == 'B' || nearest[i].kind == 'Q') 
			ans = true;
	
	if(ans) puts("YES");
	else puts("NO");
	
	return 0;
}
