#include <bits/stdc++.h>
using namespace std;

string s, ans;
int i, j; 
int main(){
    ans = "";
    while(getline(cin,s)){
        for(i = 0; i < s.size(); i++){;
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) ans+=s[i];
            else{
                if(!ans.empty() && (ans[0]=='a'||ans[0]=='A'||ans[0]=='e'||ans[0]=='E'||ans[0]=='i'||ans[0]=='I'||ans[0]=='o'||ans[0]=='O'||ans[0]=='u'||ans[0]=='U')) 						cout << ans << "ay";
                else {
                    for(j = 1; j < ans.size(); j++) cout << ans[j];
                    if(!ans.empty()) cout << ans[0] <<"ay";
                }
                ans.clear();
                cout << s[i];
            }
        }
        
        if(!ans.empty() && (ans[0]=='a'||ans[0]=='A'||ans[0]=='e'||ans[0]=='E'||ans[0]=='i'||ans[0]=='I'||ans[0]=='o'||ans[0]=='O'||ans[0]=='u'||ans[0]=='U')) 
			cout<< ans <<"ay";
        else {
            for(j = 1; j < ans.size(); j++) cout<<ans[j];
            if(!ans.empty()) cout << ans[0] << "ay";
        }
        ans.clear();
        cout << endl;
    }
    return 0;
}
