#include <bits/stdc++.h>
using namespace std;

const int MAX = 10e5 + 5;
char s[MAX];
int i, j;
int main() {      
    cin >> s; 
    for(i=0;s[i]!='\0';i++)  
        if(s[i]!='a')  
            break;
              
    for(;s[i]!='a' && s[i]!='\0';i++){  
        s[i]--;
		j++;  
    }
    
    if(!j) s[strlen(s)-1]='z';  
    
    cout << s;  
    return 0;  
}  
