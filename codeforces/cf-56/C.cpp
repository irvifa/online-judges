#include <bits/stdc++.h>
using namespace std;

string s;
int l, p, ans;

struct node{
  vector<node> child;
  string name;
};

node build(){
  node ret;
  int tmp;
  tmp = p;
  while(s[p]!=':' && s[p]!='.' && s[p]!=',') p++;
  ret.name=s.substr(tmp,p-tmp);
  while(s[p++]!='.'){
    node tmp2=build();
    ret.child.push_back(tmp2);
  }
  return ret;
}

void dfs(string name, const node &nd){
  int i;
  if(nd.name==name)ans++;
  for(i=0; i<nd.child.size(); i++)
  	dfs(name, nd.child[i]);
}

void dfs2(const node &nd){
  int i;
  for(i=0;i<nd.child.size();i++){
    dfs(nd.name,nd.child[i]);
    dfs2(nd.child[i]);
  }
}

int main(){
  cin>>s;
  l=s.size();
  p=0, ans = 0;
  node a=build();
  dfs2(a);
  printf("%d\n",ans);
}
