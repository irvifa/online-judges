#include <bits/stdc++.h>
using namespace std;

set<int> s;
string ans;
string a[110];

int n, m, i, j, y;
bool flag;

int main(){
	cin >> n >> m;
	for(i=0; i<n; i++) cin>>a[i];
	
	for(i=0; i<m; i++){
		cin>>y;
		s.insert(--y);
	}
	
	ans=a[*s.begin()];
	
	for(auto x: s){
		if(a[x].length()!=ans.length()){
			cout << "No" <<endl;
			return 0;
		}
		
		for(i=0; i<ans.length(); i++)
			if(ans[i]!=a[x][i]) ans[i]='?';
	}
	
	
	for(i=0; i<n; i++){
		if(s.count(i)||a[i].length()!=ans.length())
			continue;
		
		flag=true;
		for(j=0; j<ans.length(); j++)
			if(!(ans[j]=='?'||ans[j]==a[i][j]))
				flag=false;
		
		if(flag){
			cout<<"No"<<endl;
			return 0;
		}
	}
	
	cout << "Yes" <<endl;
	cout << ans <<endl;
	return 0;
}
