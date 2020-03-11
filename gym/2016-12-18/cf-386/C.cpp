#include <bits/stdc++.h>
using namespace std;
int s, x1, x2;
int t1, t2;
int p, d;

int main() {
	cin >> s >> x1 >> x2;
	cin >> t1 >> t2;
	cin >> p >> d;

	if (t2 <= t1) {
		printf("%d\n", abs(x1 - x2) * t2);
		return 0;
	}

	int res = abs(x1 - x2) * t2;

	if (x1 <= x2) {
		if (p <= x1) {
			if (d == 1) {
				res = min(res, abs(p - x2) * t1);
				printf("%d\n", res);
			} else {
				res = min(res, p * t1 + x2 * t1);
				printf("%d\n", res);
			}
		} else if (x1 < p) {
			if (d == 1) {
				res = min(res, (s - p) * t1 + t1 * s + x2 * t1);
				printf("%d\n", res);
			} else {
				res = min(res, p * t1 + t1 * x2);
				printf("%d\n", res);
			}
		}
	} else {
		if (x1 <= p) {
			if (d == 1) {
				res = min(res, (s - p) * t1 + (s - x2) * t1);
				printf("%d\n", res);
			} else {
				res = min(res, abs(p - x2) * t1);
				printf("%d\n", res);
			}
		} else if (p < x1) {
			if (d == 1) {
				res = min(res, (s - p) * t1 + (s - x2) * t1);
				printf("%d\n", res);
			} else {
				res = min(res, p * t1 + s * t1 + (s - x2) * t1);
				printf("%d\n", res);
			}
		}
	}

	return 0;
}