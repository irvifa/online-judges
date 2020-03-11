#include<bits/stdc++.h>
using namespace std;

const int N = 200;

int i, j;
map<string, char> words;
char c, str[N];
int main() {
	i = 0, j = 0;
    while(1) {
        c = getchar();
        if(c == EOF)   break;
        if(c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
        if(c >= 'a' && c <= 'z') {
            str[j++] = c;
        } else if(c != '-') {
            str[j++] = '\0';
            if(j > 1) {
                words[str] = 1;
            }
            j = 0;
        } else {
            c = getchar();
            if(c != '\n') {
                str[j++] = '-';
                if(c >= 'A' && c <= 'Z')
                    c = c - 'A' + 'a';
                str[j++] = c;
            }
        }
    }
    for(auto &e: words)
        cout << e.first << endl;

    return 0;
}
