#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
char name[MAX], curr;
int i, j, ans, same, len;
int main() {
	scanf("%s",name);
    len=strlen(name);
    for(i=0; i<len; i++) {
        curr=name[i];
        for(j=i+1; j<len; j++) {
        	if(name[j]!=0 && name[j]==curr) {
        		same++;
		       	name[j]=0;
		    }
        }
    }

    ans=len-same;
    if(ans%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
	return 0;
}
