#include <bits/stdc++.h>
using namespace std;

int n, x, a, b, tmp, i;
vector<int> v;
int main() {
	scanf("%d",&n);
	while(n--) {
		scanf("%d", &tmp);
		v.push_back(tmp);	
	}
	scanf("%d",&x);
	scanf("%d %d",&a,&b);
	
    v.erase(v.begin() + (x - 1));
	v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
	printf("%d\n",v.size());
    for(i =0; i<v.size(); i++)
		printf("%d ",v[i]);
	return 0;
}