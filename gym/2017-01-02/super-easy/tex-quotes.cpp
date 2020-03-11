#include<bits/stdc++.h>
using namespace std;

char c;
bool flag = true;
int main(){
    while(~scanf("%c",&c)){
        if(c=='"'){
            if(flag) printf("``");
            else printf("''");
            
            flag=(!flag);
        } else {
        	printf("%c",c);
        }
    }
    return 0;
}
