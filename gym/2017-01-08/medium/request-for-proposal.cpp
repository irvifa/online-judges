#include<bits/stdc++.h>
using namespace std;

int r, n, tc, i;
int rm, reqMet;
double price, p;
string s, nam, name;
int main() {
	tc = 0;
	while(scanf("%d %d", &r, &n), r || n) {
		tc++;
		price = 2000000000, reqMet = -1;
		
		while(r--) {
			cin.ignore();
			getline(cin, s);
		}

		while(n--) {
			getline(cin,nam);
			scanf("%lf %d\n", &p, &rm);
			if (rm > reqMet) {
				reqMet = rm;
				name = nam;
				price = p;
			} else if (rm == reqMet && p < price) {
				reqMet = rm;
				name = nam;
				price = p;
			}

			while(rm--) {
				getline(cin, s);
			}
		}
		
		if(tc > 1) cout << endl;
			
		printf("RFP #%d\n", tc);
		cout << name << endl;
	}

	return 0;
}
