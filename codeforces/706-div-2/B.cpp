// Codeforces 706B - interesting drink.cpp
#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1e5 + 10;

int arr[SIZE];

int binser(int n, int x) {
	int first = 1, last = n, mid, pos = -1;
	while(first <= last) {
		mid = (first + last) / 2;
		if(arr[mid] == x) {
			pos = mid;
			first = mid + 1;
		}
		else if(arr[mid] > x)
			last = mid - 1;
		else
			first = mid + 1;
	}

	if(pos != -1)
		return pos;
	else
		return first - 1;
}


int main() {
	int i, n, x, ans, q;

	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	sort(arr , arr + n + 1);

	scanf("%d", &q);
	for(i = 0; i < q; i++) {
		scanf("%d", &x);

		ans = binser(n, x);
		if(ans != -1)
			printf("%d\n", ans);
		else
			printf("%d\n", 0);
	}

	return 0;
}

