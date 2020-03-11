#include <bits/stdc++.h>
using namespace std;


set<int> s;

string res;
string a[110];

int n,m;

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0,x;i<m;i++){
		cin>>x;
		s.insert(--x);
	}
	res=a[*s.begin()];
	for(auto x:s){
		if(a[x].length()!=res.length()){
			cout<<"No"<<endl;
			return 0;
		}
		for(int i=0;i<res.length();i++){
			if(res[i]!=a[x][i])
				res[i]='?';
		}
	}
	for(int i=0;i<n;i++){
		if(s.count(i)||a[i].length()!=res.length())
			continue;
		bool chk=true;
		for(int j=0;j<res.length();j++){
			if(res[j]=='?'||res[j]==a[i][j]);
			else
				chk=false;
		}
		if(chk){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl
		<<res<<endl;
	return 0;
}
