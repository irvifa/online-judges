#include<bits/stdc++.h>
using namespace std;

string s1, s2, s;
int n, i;
map<char, char> m;
bool is_palin, is_mirror;    
int main() {
    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    
    for(i=0; i < s1.size(); i++) m[s1[i]] = s2[i];
    
    while(cin >> s) {
        is_palin = 1; is_mirror = 1;
        
        n=s.length();
        
        for(i=0; i <= n/2; i++){
            if(s[i]!=s[n-1-i]) is_palin=0;
            if(s[n-1-i]!=m[s[i]]) is_mirror=0;
        }
        
        if(is_palin && is_mirror) cout << s <<" -- is a mirrored palindrome." << endl << endl;
        else if(is_palin && !is_mirror) cout << s <<" -- is a regular palindrome."<< endl << endl;
        else if(!is_palin && is_mirror) cout << s <<" -- is a mirrored string."<< endl << endl;
        else cout << s <<" -- is not a palindrome."<< endl << endl;
    }
    return 0;
}
