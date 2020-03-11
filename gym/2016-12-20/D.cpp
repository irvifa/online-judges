#include <bits/stdc++.h>
using namespace std;

int i, t, q;
int k, n;
multimap<int, int> m;
vector<int, int> v;
int main(){
    scanf("%d", &t);
    while(t--) {
    	int a, b;
    	scanf("%d %d", &a, &b);
    	m.insert(make_pair(a, b));
    }
    scanf("%d", &q);
    while(q--) {
    	scanf("%d", &n);
    	while(n--) {
    		int tmp;
    		scanf("%d", &tmp);
    		v[tmp] = false;
    	}
    	vector<int>::iterator it;
    	it=find(v.begin(),v.end(),true);
    	int pos = distance(v.begin(), it);
    	cout << pos << endl;
    	if(it!=v.end()){
        	cout<< pos << " "<< m.find(pos)->second <<endl;
    	}
    	else{
        	puts("0 0");
   	 	}
    }
    return 0;
}
