#include<bits/stdc++.h>
using namespace std;

string s, word, tmp;
int i, j, k, len;
bool flag;
int main() {
    getline(cin, s);
    while(getline(cin, s)) {
        getline(cin, word);
        len = word.length();
        for(i = 0; i < 26; i++) {
            stringstream ss;
			ss << s;
            flag = false;
            while(ss >> tmp) {
                if(tmp.length() == len) {
                    for(j = 0; j < len; j++) {
                        if((word[j]-'a'+i)%26 != tmp[j]-'a')
                            break;
                    }
                    if(j == len)    flag = true;
                }
            }
            if(flag)    putchar(i+'a');
        }
        puts("");
    }
    return 0;
}
