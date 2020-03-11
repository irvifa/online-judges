#include<bits/stdc++.h>
using namespace std;

int t, n, pos, i;
string s;
int main() { 
    scanf("%d", &t);
    while(t--) {
    	scanf("%d", &n);
        vector<int> instructions;
        pos = 0;
        while(n--) {
            cin >> s;
            if(s == "LEFT") {
                --pos;
                instructions.push_back(-1);
            } else if (s == "RIGHT") {
                ++pos;
                instructions.push_back(1);
            } else {
                 cin >> s >> i;
                 pos += instructions[i - 1];
                 instructions.push_back(instructions[i - 1]);
            }
        }
        printf("%d\n",pos);
    }
    return 0;
}
