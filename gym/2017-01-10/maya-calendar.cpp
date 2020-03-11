#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N = 19;
int t, d, y, n, i;
string s;
ll tot;
int main() {	
	string haab[N]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
	string tzolkin[N+1]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
	scanf("%d", &t);
	printf("%d\n", t);
	while(t--) {
		cin >> d >> s >> y;
		for(i=0; i<N; ++i)
			if(s == haab[i])
				break;

		tot =y*365 + i*20+d+1;
		y = (tot-1)/260;
		tot %= 260;
		d = tot%20;
		n = tot%13;
		if(tot == 0) tot = 260;
		if(d == 0) d = 20;
		if(n == 0) n = 13;

		cout << n << " " << tzolkin[d-1] << " " << y << endl;
	}
	return 0;
}
