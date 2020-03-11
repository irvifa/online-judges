#include <bits/stdc++.h>
using namespace std;

int i, a, f, n, l;
vector<int> v;
bool flag;	
int main() {
	scanf("%d %d", &a, &f);
	i = 0;
	flag = true;
	while(a--) {
		scanf("%d", &n);
		if(flag) {
			flag = false;
			v.push_back(1); 
			i++;
		} else {
			if(n - l < f) v[i]++;
			else v.push_back(1), i++; 
		}
		l = n;
	}
	printf("%d\n", v.size());
	return 0;
}