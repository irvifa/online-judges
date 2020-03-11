#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

//http://codeforces.com/problemset/problem/725/D

template<typename T> void print_queue(T& q) {
    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

const int N = 3e5+5;

pair<ll,ll> a[N];
int i, n, ans;
priority_queue<ll,vector<ll>,greater<ll>> pq; //rev ordering from lowest
int main(){
	cin >> n;
	for(i = 0 ; i < n ; i++)
		cin >> a[i].first >> a[i].second;
	
	sort(a + 1,a + n);
	
	for(i=n-1; i >= 1 && a[i].first > a[0].first; i--)
		pq.push(a[i].second+1-a[i].first);
	
	ans= pq.size()+1;
	// limak is member of first team
	while(!pq.empty() && pq.top()<=a[0].first) {
		a[0].first-= pq.top();
		pq.pop();

		for(;i>=1 && a[i].first>a[0].first;i--)
			pq.push(a[i].second+1-a[i].first);

		// cast pq size into int
		ans= min(ans, (int)pq.size()+1);
	}

	cout << ans << endl;
	// debug
	// print_queue(pq);
	return 0;
}
