#include <bits/stdc++.h>
using namespace std;

#define mp(x,y) make_pair((x),(y))

typedef pair<int,int> pii;

string itos(int x ){
	stringstream ss;
	ss<<x;
	return ss.str();
}


void getnxt(pii &curr){
	curr.second+=(curr.first?1:-1);
	
	if(curr.second<0) {
		curr.second=0;
		curr.first^=1;
	} else if(curr.second==13) {
		curr.second=12;
		curr.first^=1;
	}
}

string ss;
map<char,int> m;
int flag;
char re, out[2][13];

int i, j;
int main(){
	cin>>ss;
	
	for(i=0; i<=26; i++) {
		if(m.count(ss[i])) {
			flag=i-m[ss[i]]-1;
			re=ss[i];
		} else m[ss[i]]=i;
	}
	
	if(!flag) {
		cout<<"Impossible"<<endl;
	} else {
		ss+=ss;
		pii curr=mp(0,flag/2);
		out[curr.first][curr.second]=re;
		for(i=m[re], j=0 ; j<=26; i++,j++){
			if(ss[i]==re)
				continue;
			getnxt(curr);
			out[curr.first][curr.second]=ss[i];
		}
		for(i=0; i<2; i++){
			for(j=0; j<13; j++)
				cout<<out[i][j];
			cout<<endl;
		}
	}
	
	return 0;
}
