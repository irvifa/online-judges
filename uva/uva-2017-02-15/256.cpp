#include <bits/stdc++.h>
using namespace std;
 
vector<int> v;
 
int pre() {
	int i;
    for(i = 0; i < 10000; i++)
        v.push_back(i * i);
}

int i, n;
int main() {
    pre();
    while(scanf("%d", &n) == 1) {
        for(i = 0; i < v.size(); i++) {
            if(v[i] >= (int) pow(10, n)) break;
            if(pow(v[i] % (int) pow(10, n / 2) + v[i] / (int) pow(10, n / 2), 2) == v[i]) \
                cout << setw(n) << setfill('0') << v[i] << endl;
        }   
    }
}
