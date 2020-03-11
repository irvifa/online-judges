#include <bits/stdc++.h>
using namespace std;

map <int, int> m;
int n, item, i;
int main() {
	scanf("%d",&n);
    for(i = 0; i < n; i++){
		scanf("%d",&item);
		if(m.count(item) == 0) m[item] = 1;
		else m[item]++; 
    }
    
	scanf("%d",&n);
    for(i = 0; i < n; i++){
		scanf("%d",&item);
		if(m.count(item) == 0) m[item] = -1;
		else m[item]--; 
	}
	
	for (auto& x: m) {
    	if(x.second != 0) cout << x.first << " ";
    } 
	
	return 0;
}
