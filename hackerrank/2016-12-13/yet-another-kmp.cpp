#include<bits/stdc++.h>
using namespace std;  
typedef long long ll;  
         
vector< pair <int, char> > v;  
      
bool cmp(const pair<int, char>&a, const pair<int, char>&b) {  
	return a.second < b.second;  
}  
      
void solve() {  
	int i, j, k;  
	for (i = 0; i < 26; i++) {  
		scanf("%d", &k);  
    	if (k == 0)continue;  
        v.push_back(make_pair(k, i + 'a'));  
	}  
    sort(v.begin(), v.end());  
    sort(v.begin() + 1, v.end(), cmp);  
    if (v.size() == 1) {  
    	for(i = 0; i < v[0].first; i++)   
    		printf("%c", v[0].second);  
		printf("\n");  
    	return;  
	}  
    int le = 0, ri = 1;    
    printf("%c", v[le].second);  
    v[le].first--;  
    if(v[le].second > v[ri].second)   {  
    	sort(v.begin(), v.end(), cmp);       
    	for(i = 0; i < v.size(); i++) {  
    		for(j = 0; i < v[i].first; j++) {  
        		printf("%c", v[i].second);  
        	}  
    	}  
    	printf("\n");  
    } else {  
    	while (ri < v.size()) {  
        	if (v[le].first) {  
            	v[le].first--;  
            	printf("%c", v[le].second);  
            }  
            if (v[ri].first) {  
            	v[ri].first--;  
                printf("%c", v[ri].second);  
                if (v[ri].first == 0) ri++;  
            }  
        }  
    }  
}  
      
int main() {  
    solve();  
    return 0;  
}  
