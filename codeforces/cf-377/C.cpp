#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


ll b, d, s, full, cnt;
int main() {
	cin>> b >> d >> s;
  
  	full,cnt=0;
  
  	full = max(b,max(d,s));
	if(full-b>0) {
	    cnt += full-b-1;
	}
	if(full-d>0) {
	    cnt+= full-d-1;
	}
  	if(full-s>0) {
    	cnt+= full-s-1;
  	}
  	
  	cout << cnt << endl;
  	return 0;
}
