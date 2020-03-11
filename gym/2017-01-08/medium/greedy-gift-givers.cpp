#include<bits/stdc++.h>
using namespace std;

int n, g, a, i, j;
string s1, s2;    
int main(){
    cin >> n;
    while(1){
        map<string, int> m;
    	vector<string> v;
        
        for(i = 0; i < n; i++){
            cin>>s1;
            v.push_back(s1);
        }
        
        for(i = 0; i < n; i++){
            cin >> s1 >> g >> a;
            if(a!=0) m[s1]-=a*(g/a);
            
            for(j = 0; j < a; j++){
                cin >> s2;
                m[s2]+=g/a;
            }
        }
        
        for(i = 0; i < n; i++)
            cout << v[i] << " " << m[v[i]] <<endl;
        
        if(cin >> n ) cout<<endl;
        else break;
    }
}
