#include<bits/stdc++.h>
using namespace std;

map<string, int> m;

void precompute() {
    queue<string> q;
    char c;
    int key;
    
    for(c = 'a'; c<='z'; c++) q.push(string(1,c));
    
    string s;
    
    key = 1;    
    
    while(!q.empty()) {
        s = q.front();
        q.pop();
        
        m[s] = key;
        key++;
        
        if(s.size()==5) continue;
        
        for(c = s[s.size() - 1] + 1; c <= 'z'; c++) q.push(s+c);
    }
}

string s;    
int main(){
    precompute();
    
    while(cin >> s){
        if(!m.count(s)) puts("0");
        else cout << m[s] << endl;
    }
  
    return 0;
}
