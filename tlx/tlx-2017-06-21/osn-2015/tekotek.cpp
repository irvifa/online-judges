#include<bits/stdc++.h>
using namespace std;

string s;
int n, i;
int main() {
	cin >> s;
	cin >> n;
	cout << "Anak ayam turunlah " << n << endl;
	for(i = n - 1; i > 0; i--) {
		cout << "Mati satu tinggallah " << i << endl;
		cout << "Anak ayam turunlah " << i << endl;
	}
	cout << "Mati satu tinggallah induknya" << endl;
	return 0;
}
