#include<bits/stdc++.h>
using namespace std;

bool cmp(const string &s1, const string &s2) {
    return s1.length() < s2.length();
}

int n, i, j, len, col, row;
vector<string> v;
int main() {  
    while (~scanf("%d", &n)) {
    	v.resize(n);
        for(i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        len = v[distance(v.begin(), max_element(v.begin(), v.end(), cmp))].length();
        //cout << "asem2 jawa " << len << endl;
        
        col = (60 - len) / (len + 2) + 1; 
        row = (n + col - 1) / col;
    
        puts("------------------------------------------------------------");
        for(i = 0; i < row; i++) {
            for (j = i; j < n; j += row)
                cout << setw(len + 2) << setiosflags(ios::left) << v[j];
            cout << endl;
        }
    }
	return 0;
}
