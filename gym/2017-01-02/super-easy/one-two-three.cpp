#include <bits/stdc++.h>
using namespace std;

int edit_distance(string s1, string s2) {
	int i, diff;
    diff = max(s1.size(), s2.size()) - min(s1.size(), s2.size());
    
    for (i = 0; i < min(s1.size(), s2.size()); ++i)
        if (s1[i] != s2[i])
            ++diff;
    
    return diff;
}

int t, i;
string s;
string words[3] = {"one", "two", "three"};
int main() { 
    scanf("%d", &t);
    while ( t-- ) {
        cin >> s;
        for (i = 0; i < 3; ++i) {
            if (edit_distance(s, words[i]) <= 1) {
                printf("%d\n",i + 1);
                break;
            }
        }
    }
    return 0;
}
