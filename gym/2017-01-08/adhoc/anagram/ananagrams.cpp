#include<bits/stdc++.h>
using namespace std;

map <string, pair<string,int> > m;
vector<string> v;
string s, w;
int main() {;
    while(cin >> s, s != "#") {
        w = s;
        transform(w.begin(), w.end(),w.begin(),::toupper);
        sort(w.begin(),w.end());
        m[w].first=s;
        m[w].second++;
    }
    
    for(auto e: m) 
    	if(e.second.second == 1)
    		v.push_back(e.second.first);
    
    sort(v.begin(),v.end());
    
    for (auto e: v)
        cout << e << endl;
	
	return 0;   
}
