#include <bits/stdc++.h>
using namespace std;

int levenshtein(string& s1, string& s2) {
	int len1 = s1.size(), len2 = s2.size();
	int i, j;
	vector<vector<int>> d(len1 + 1, vector<int>(len2 + 1));

	d[0][0] = 0;
	for(i = 1; i <= len1; ++i) d[i][0] = i;
	for(i = 1; i <= len2; ++i) d[0][i] = i;

	for(i = 1; i <= len1; ++i)
		for(j = 1; j <= len2; ++j)
                      d[i][j] = min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1) });
	return d[len1][len2];
}

string a, b;
int main() {
	cin >> a;
	cin >> b;
	if(levenshtein(a,b)==1&&a.length()>b.length())
		cout << "Tentu saja bisa!" << endl;
	else
		cout << "Wah, tidak bisa :(" << endl;
	return 0;
}
