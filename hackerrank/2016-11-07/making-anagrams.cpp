#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int number_needed(string s1, string s2) {
	ll ans = 0;
	int i, a[26]={0};
    
    for(i=0; i<s1.length(); i++)
        a[s1[i]-'a']++;
    
    for(i=0; i<s2.length(); i++)
        a[s2[i]-'a']--;
    
    for(i=0; i<26; i++)
        ans += abs(a[i]);
    
    return ans;   
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

