#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<int> p(26);
vector<int> r(26);
int afs;

void make_set(int x) {
	p[x] = x;
	r[x] = 0;
}

int find_set(int x) {
	return p[x] == x? x: (p[x] = find_set(p[x]));
}

bool is_same_set(int i, int j) {
	return find_set(i) == find_set(j);
}

void union_set(int i, int j) {
	int x = find_set(i);
	int y = find_set(j);
	if(r[x] > r[y]) p[y] = x;
	else {
		p[x] = y;
		if (r[x] == r[y]) r[y]++;
	}	
}

int main(){
    int t, n, a, f, afs, i, j;
    string s;
    
    scanf("%d\n\n",&t);
    for(j = 1; j <= t; j++){
        getline(cin,s);
        n = s[0]-'A'+1, afs = n;
        for(i = 0; i < n; i++) make_set(i);
        
        while(1){
            if(!getline(cin,s) || s.empty()) break;
            
            a = s[0]-'A'; f = s[1]-'A';
            if(!is_same_set(a,f)) {
                union_set(a,f);
                afs--;
            }
        }
        
        if(j != 1) printf("\n");
        printf("%d\n",afs);
    }
    
    return 0;
}