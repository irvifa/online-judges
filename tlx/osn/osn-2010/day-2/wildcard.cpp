#include <bits/stdc++.h>
using namespace std;

string s, curr, s1, s2, ss, sss, tmp;
int l, a, b, now, pos, n, i;
vector<string> v;

int find() {
	l=s.length();
    if (s[0]=='*') return 1;
    else if (s[l-1]=='*') return 3;
    else return 2;
}

void solve() {
	int x, y;
    if (now==1) {
    	s2=s.substr(1,l-1), pos=0;
    } else if (now==2) {
    	x=1, y=l-2;
    	while (s[x]!='*' && s[y]!='*') x++, y--;
    	if (s[x]=='*') pos=x;
    	else if (s[y]=='*') pos=y;
    	s1 = s.substr(0,pos);
    	s2 = s.substr(pos+1,l-pos-1);
    } else s1=s.substr(0,l-1), pos=l-1;
    
}
     
bool is_exists(int w) {
	int x, y;
    bool flag;
    curr = v[w];
	l = curr.length();
    flag = false;
    if(now == 1) {
    	b = s2.length();
    	if (l >= b) {
    		x=l-b;
    		ss=curr.substr(x,b);
    		if (s2==ss) flag=true;
    	}
    } else if (now==2) {
    	a = s1.length();
    	b = s2.length();
    	if ((l>=a) && (l>=b)) {
    		ss = curr.substr(0,a);
    		sss = curr.substr(l-b,b);
    		if (((ss==s1) && (sss==s2)) && (a-1<l-b))
    			flag=true;
    	}
    } else if (now==3) {
    	b = s1.length();
    	if (l >= b) {
    		ss = curr.substr(0,b);
    		if (s1 == ss) flag=true;
    	}
    }
    return flag;
}
     
int main() {
	cin >> s;
   	scanf("%d", &n);
    	
    for(i = 0; i < n; i++) {
    	cin >> tmp;
    	v.push_back(tmp);
    }
    	
    if (s=="*") {
    	for (auto e: v)
    		cout << e << endl;
    } else {
    	now = find();
    	solve();
    	for (i = 0; i < n; i++) {
    		if (is_exists(i))
    			cout << v[i] << endl;
    	}
    }
    return 0;
}
