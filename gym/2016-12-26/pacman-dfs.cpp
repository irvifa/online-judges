#include <bits/stdc++.h>
using namespace std;

const int N = 30;
vector< pair<int,int> > vis;
stack< pair<int,int> > st;
char visit[N][N];
void st(int x, int y, int pacman_x, int pacman_y, int food_x, int food_y, vector <string> grid) {pair<int,int> v;
 st.push(make_pair(pacman_x,pacman_y));
 while(!st.empty()) {
    v=st.top();
    if(v.first==food_x&&v.second==food_y) {
      visit[v.first][v.second]='g';
      vis.push_back(v);
      return;
    }
    if(visit[v.first][v.second]=='g') {
        visit[v.first][v.second]='b';
        st.pop();
        continue;
    }
    if(visit[v.first][v.second]=='b') {
      st.pop();
      continue;
    }  
    visit[v.first][v.second]='g';
    vis.push_back(v);
    if(grid[v.first-1][v.second]!='%'&&v.first>=1&&visit[v.first-1][v.second]=='w')
      st.push(make_pair(v.first-1,v.second));
    if(grid[v.first][v.second-1]!='%'&&v.second>=1&&visit[v.first][v.second-1]=='w')
      st.push(make_pair(v.first,v.second-1));
    if(grid[v.first][v.second+1]!='%'&&v.second+1<=y-1&&visit[v.first][v.second+1]=='w')
      st.push(make_pair(v.first,v.second+1));
    if(grid[v.first+1][v.second]!='%'&&v.first+1<=x-1&&visit[v.first+1][v.second]=='w')
      st.push(make_pair(v.first+1,v.second));
  }
}

int main(void) {

    int x, y, pacman_x, pacman_y, food_x, food_y;
    int i, d;
    cin >> pacman_x >> pacman_y;
    cin >> food_x >> food_y;
    cin >> x >> y;
    
    vector <string> grid;
    vector< pair<int,int> >path;
  
    for(int i=0; i<x; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }
    for(int i=0;i<x;i++)
      for(int j=0;j<y;j++)
	     visit[i][j]='w';
  
  dfs( x, y, pacman_x, pacman_y, food_x, food_y, grid);
	 
	cout << vis.size() << endl;
	for(i = 0; i < vis.size(); i++)	
		cout << vis[i].first << " " << vis[i].second << endl;
  
  d=0;
	for(i = 0; i < vis.size(); i++) {
      if(visit[vis[i].first][vis[i].second]=='g') {
          d++;
          path.push_back(vis[i]);
	   }
	}

	d--;
	cout << d << endl;
	for(i = 0; i < path.size(); i++)
			cout<<path[i].first<<" "<<path[i].second<<endl;
  
  return 0;
}