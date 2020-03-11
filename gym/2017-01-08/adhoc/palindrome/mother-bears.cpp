#include<bits/stdc++.h>
using namespace std;

bool is_valid(const char& curr) {
    return !(curr == '.' || curr == ',' || curr == '!' || curr == '?' || curr == ' ');
}

bool is_palindrome(const string& s) {
    deque<char> d;
    int i;
    char f, e;
    
    for(i = 0; i < s.length(); i++)
    	if(is_valid(s[i]))
    		d.push_back(s[i]);
    
    while(!d.empty()) {
    	f = d.front();
    	e = d.back();
    	if (tolower(f) != tolower(e))
            return false;
        
        if(!d.empty()) d.pop_front();
        if(!d.empty()) d.pop_back();
    }
    return true;
}

string s;    
int main() {
    while (getline(cin, s), s != "DONE") {
        if (is_palindrome(s)) puts("You won't be eaten!");
        else puts("Uh oh..");
    }
}
