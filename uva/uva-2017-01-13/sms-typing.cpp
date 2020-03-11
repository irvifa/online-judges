#include<bits/stdc++.h>
using namespace std;

int t, tc, ans;
string s;
int main() {
    tc = 0;
    scanf("%d", &t);
    getline(cin,s);
    while(t--) {
        ans = 0;
        getline(cin,s);
        for(auto c: s) {
            if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' ')
                ans++;
            else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x')
            	ans += 2;
            else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y')
            	ans += 3;
         	else ans += 4;
		}
        printf("Case #%d: %d\n",++tc,ans);
    }
    return 0;
}
