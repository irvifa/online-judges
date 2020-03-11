#include<bits/stdc++.h>
using namespace std;

set<string> ig;
multimap<string,string> m;
string s, tmp2, tmp;
int i, j, k;
int main() {
    while(getline(cin,s),s!="::") ig.insert(s);
    
    while(getline(cin,s)) {
        for(i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
            
        for(i = 0; i < s.size(); i++) {
            if(!isalpha(s[i]))
                continue;
            
            j = i, tmp = "";
            while(j < s.size() && isalpha(s[j])) {
                tmp += s[j];
                j++;
            }
            
            if(!ig.count(tmp)) {
                for(k=0;k<tmp.size();k++)
                    tmp[k]=toupper(tmp[k]);
                
                tmp2 = s;
                tmp2.replace(i, tmp.size(), tmp);
                m.insert(make_pair(tmp, tmp2));
            }
            
            i = j;
        }
    }

    for(auto e: m)
        cout << e.second << endl;

    return 0;
}
