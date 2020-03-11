#include <bits/stdc++.h>
using namespace std;

int solve(multiset<int> a, multiset<int> b) {
    int ret;
    ret = 0;
    for (auto &e : a) {
    	if (b.count(e)!=a.count(e)) {
            ret++;
        }
    }
    return ret;
}

int n, a, f, s;
multiset<int> m1, m2;
int main() {
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &a, &f);
		while(a--) {
			scanf("%d", &s);
			m1.insert(s);
		}
		
		while(f--) {
			scanf("%d", &s);
			m2.insert(s);
		}
		
		if (m1.size() < m2.size()) 
        	printf("%d\n",solve(m1, m2));
        else 
        	printf("%d\n",solve(m2, m1));
        	
		m1.clear(), m2.clear();
	}
}
