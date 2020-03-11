#include <bits/stdc++.h>
using namespace std;

int find(string s) {
	if (s == "January")
		return 1;
	if (s == "February")
		return 2;
	if (s == "March")
		return 3;
	if (s == "April")
		return 4;
	if (s == "May")
		return 5;
	if (s == "June")
		return 6;
	if (s == "July")
		return 7;
	if (s == "August")
		return 8;
	if (s == "September")
		return 9;
	if (s == "October")
		return 10;
	if (s == "November")
		return 11;
	if (s == "December")
		return 12;
	return -1;
}


int mS, dS, yS, mE, dE, yE;
int n, tc, ans;
string s;
int main() {
	scanf("%d", &n);
	tc = 0;
	while (n--) {
		cin >> s;
		scanf("%d, %d", &dS, &yS);
		mS = find(s);

		cin >> s;
		scanf("%d, %d", &dE, &yE);
		mE = find(s);

		if (mS > 2) yS++;
		if (mE < 2 || (mE == 2 && dE < 29)) yE--;

		ans = yE / 4 - (yS - 1) / 4;
		ans -= yE / 100 - (yS - 1) / 100;
		ans += yE / 400 - (yS - 1) / 400;

		printf("Case %d: %d\n", ++tc, ans);
	}
	return 0;
}
