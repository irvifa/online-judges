#include<bits/stdc++.h>
using namespace std;

bool change(char curr, char c1, char c2) {
    if(curr == 'x' && c1 == '-') return true;
    else if(curr == 'y' && c2 == 'y' && c1 == '+') return true;
    else if(curr == 'z' && c2 == 'z' && c1 == '+') return true;
    else return false;
}

int n, sign, i;
string s;
char c;
int main(){
    while(scanf("%d",&n),n){
        n--;
        sign = 1, c = 'x';
        while(n--) {
            cin >> s;
            if(s[0] == 'N') continue;
            
            if(change(c,s[0],s[1])) sign = -sign;
            
            if(c == 'x') c = s[1];
            else if(c == 'y' && s[1] == 'y') c = 'x';
            else if(c == 'z' && s[1] == 'z') c = 'x';
        }
        
        if(sign == 1) printf("%c%c\n",'+',c);
        else printf("%c%c\n",'-',c);
    }
	return 0;
}    

