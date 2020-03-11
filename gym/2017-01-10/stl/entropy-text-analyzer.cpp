#include<bits/stdc++.h>
using namespace std;

string s, word;
int i, j, lambda;
bool flag;
double Et, Emax;
int main() {
    while(cin >> s, s != "****END_OF_INPUT****") {
        map<string, int> r;
        lambda = 0;
       	do {
            for(i = 0; i < s.length(); i++) {
                if(!isalpha(s[i]))
                    continue;
                word = "";
              
                for(j = i; j < s.length(); j++) {
                    flag = false;
                    switch(s[j]) {
                        case ',':break;
                        case '.':break;
                        case ':':break;
                        case ';':break;
                        case '!':break;
                        case '?':break;
                        case '\"':break;
                        case '\t':break;
                        case '(':break;
                        case ')':break;
                        case ' ':break;
                        case '\n':break;
                        case EOF:break;
                        case '\0':break;
                        default:
                            if(isupper(s[j]))
                                s[j] += 32;
                            word += s[j];
                            flag = true;
                    }
                    if(!flag)
                        break;
                }
                i = j;
                lambda++;
                r[word]++;
            }
        } while(cin >> s, s!= "****END_OF_TEXT****");
        Et = 0, Emax = log10(lambda);
        for(auto e: r) {
            Et += e.second*(log10(lambda)-log10(e.second));
        }
        Et /= lambda;
        if(lambda == 0)
            puts("0 0.0 0");
        else
            printf("%d %.1lf %.0lf\n", lambda, Et, Et*100/Emax);
    }
    return 0;
}
