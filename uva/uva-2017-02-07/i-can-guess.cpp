#include<bits/stdc++.h>
using namespace std;

int n, op, x, i;
bool is_stack, is_priority_queue, is_queue;
int main() {
	while (scanf("%d", &n) != EOF) {
		queue<int> q;
		stack<int> s;
		priority_queue<int> pq;
		is_stack = true, is_queue = true, is_priority_queue = true;

		for (i = 0; i < n; i++) {
			scanf("%d %d", &op, &x);
			switch (op) {
			case 1:
				if (is_stack) s.push(x);
				if (is_queue) q.push(x);
				if (is_priority_queue) pq.push(x);
				break;
			case 2:
				if (is_stack) {
					if (s.empty() || s.top() != x) is_stack = false;
					else s.pop();
				}
				if (is_queue) {
					if (q.empty() || q.front() != x) is_queue = false;
					else q.pop();
				}
				if (is_priority_queue) {
					if (pq.empty() || pq.top() != x) is_priority_queue = false;
					else pq.pop();
				}
				break;
			}
		}

		if (is_stack && !is_queue && !is_priority_queue)
			puts("stack");
		else if (!is_stack && is_queue && !is_priority_queue)
			puts("queue");
		else if (!is_stack && !is_queue && is_priority_queue)
			puts("priority queue");
		else if (!is_stack && !is_queue && !is_priority_queue)
			puts("impossible");
		else
			puts("not sure");
	}
	return 0;
}
