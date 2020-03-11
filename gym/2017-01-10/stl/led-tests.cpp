#include<bits/stdc++.h>
using namespace std;

const int N = 11;
const int num[] = { 126, 48, 109, 121, 51, 91, 95, 112, 127, 123 };

string s;
int i, j, k;
int n, light[N], a, d;
bool ok, check;
int main() {
	while (scanf(" %d ", &n) && n) {
		for (i = 0; i < n; i++) {
			cin >> s;
			light[i] = 0;
			for (j = 0; j < 7; j++) {
				light[i] <<= 1;
				if (s[j] == 'Y') light[i] |= 1;
			}
		}
		
		ok = false;
		for (k = 9; k >= n - 1 && !ok; k--) {
			check = true;
			a = (1 << 7) - 1;
			for (i = k, j = 0; j < n && check; i--, j++) {
				if ((a & light[j]) != light[j]) check = false;
				if ((num[i] & light[j]) != light[j]) check = false;
				d = (num[i] & ~light[j]);
				a &= ~d;
			}
			ok = check;
		}
		if (!ok) puts("MISMATCH");
		else puts("MATCH");
	}
	return 0;
}
