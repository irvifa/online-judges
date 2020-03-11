#include <bits/stdc++.h>
using namespace std;

bool is_lower(char c) {
    return c >= 'a' && c <= 'z';
}

int size, i;
char c;
string s;
set<string> words;    
int main() {

    while (cin >> s) {
        size = s.size();
        
        string curr = "";
        for (i = 0; i < size; ++i) {
            c = tolower(s[i]);
            if (is_lower(c))
                curr += c;
            else if (curr != "") {
                words.insert(curr);
                curr = "";
            }
        }
        if (curr != "")
            words.insert(curr);
    }
    
    for (auto &e: words)
        cout << e << endl;
   return 0;
}
