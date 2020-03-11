#include <iostream>
#include <vector>
using namespace std;


int duration, n, m, now, i;
double pay, loan, d[101], p;
double monthlyPayment, curVal, curLoan;
int main() {
	while (1) {
		cin >> duration >> pay >> loan >> n;
		if (duration < 0)
			break;
		while (n--) {
			scanf("%d %d",&m,&p);
			for (i = m; i < 101; i++)
				d[i] = p;
		}

		now = 0;
		monthlyPayment = loan / duration;
		curVal = (loan + pay) * (1 - d[0]);
		curLoan = loan;
		while (curVal < curLoan) {
			now++;
			curLoan -= monthlyPayment;
			curVal = curVal * (1-d[now]);
		}

		cout << now << " month";
		if (now != 1)
			cout << "s";
		cout << endl;
	}

	return 0;
}
