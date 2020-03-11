#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX = 1e5+5;

int cnt[30];
char s[MAX], t[MAX];
int i, j, m, n;
bool is_automaton, is_arr, both;
int main() {
	cin >> s;
	cin >> t;
    
    n = strlen(s);
    m = strlen(t);
    
    memset(cnt, 0, sizeof cnt);
    
    is_automaton = false;
    for(i=0,j=0; i<n; ++i) {
        if(j<m && s[i]==t[j]) ++j;
        if(j==m) is_automaton = true;
    }
    
    for(i=0; i<n; ++i) cnt[s[i]-'a']++;
    for(i=0; i<m; ++i) cnt[t[i]-'a']--;
    
    is_arr = true;
 	both = true;
    
    for(i=0; i<26; ++i){
        is_arr&=cnt[i]==0;
        both&=cnt[i]>=0;
    }
    
    if(is_automaton) cout<<"automaton"<<endl; 
    else if(is_arr) cout<<"array"<<endl; 
    else if(both) cout<<"both"<<endl; 
    else cout<<"need tree"<<endl;    
    return 0;
}
