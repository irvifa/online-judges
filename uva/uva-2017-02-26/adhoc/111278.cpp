#include <bits/stdc++.h>
using namespace std;

const string Qwerty = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
const string Dvorak = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

char ans[100];

void pre() {
    int i, n;
	n = Qwerty.length();
    for (i = 0; i < n; i++) {
        ans[ Qwerty[i] ] = Dvorak[i];
    }
}

int i, len;
int main() {
    string str;
    pre();
    while (getline(cin, str)) {
        len = str.length();
        for (i=0; i < len;i++)
            printf("%c", ans[str[i]] );
        cout << endl;
    }
}
