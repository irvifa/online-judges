#include <bits/stdc++.h>
using namespace std;

int t, q, v;
set<int> st;
int main() {
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&q,&v);
		if(q==1) {
			if(st.count(v)==0) st.insert(v);
		} else if(q==2) {
			if(st.count(v)!=0) st.erase(v);
		} else {
			if(st.count(v)==0) puts("No");
			else puts("Yes");
		}
	}
	return 0;
}
