#include<bits/stdc++.h>
using namespace std;

int n, x, sum, ans;
int main() {
	while (scanf("%d", &n), n) {
		priority_queue<int, vector<int>, greater<int> > pq;
		while (n--) {
			scanf("%d", &x);
			pq.push(x);
		}

		sum = 0, ans = 0;
		while (pq.size() > 1) {
			sum = pq.top();
			pq.pop();
			sum += pq.top();
			pq.pop();
			ans += sum;
			pq.push(sum);
		}
		printf("%d\n", ans);
	}
	return 0;
}
