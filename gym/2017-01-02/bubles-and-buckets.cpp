#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int get(vector<int> *tree, int i){
	int sum = 0;

	for( ; i>0; i -= (i&-i))
		sum +=tree->at(i);
	
	return sum;
}

void add(vector<int> *tree, int i ,int val){
	for (;i < tree->size(); i += (i & -i))
		tree->at(i) += val;
}

ll n, total, size, num;
int i;
int main(){
	while(scanf("%lld",&n) && n != 0){
		vector <ll> inv;
		total=0, size=0;
		
		while (n--) {
			scanf("%lld",&num);
			size=max(size,num);
			inv.push_back(num);
		}
		
		vector<int> tree (size+1,0);
		
		for (i = inv.size()-1; size > 0 && i >= 0 ; --i) {
			total += get(&tree,inv[i]-1);
			add(&tree,inv[i],1);
		}
		
		if (total%2 == 0)
			puts("Carlos");
		else 
			puts("Marcelo");
	}	
    return 0;
}
