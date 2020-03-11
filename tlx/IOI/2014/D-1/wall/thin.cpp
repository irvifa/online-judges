#include "wall.h"
#include<bits/stdc++.h>
using namespace std;

const int M = 1024290;
const int N = 2; 
const int O = 1001001;
int cnt, z, ims, ime, mh;
int mem[M][N];

struct afs {
    int idx, x, y, op;
    bool operator< (const afs &c) const {
        if(x!=c.x)return x<c.x;
        return idx<c.idx;
    }
};

afs af [O];
     
void gen(int a, int b, int c, int d){
    if(a == -1) ims = c, ime = d;
    else if(c == -1) ims = a, ime = b;
    else if(b < c) ims = ime = c;
    else if(d < a) ims = ime = d;
    else ims = max(a,c), ime = min(b,d);
}

void ins(int idx, int s, int e){
    mem[idx][0] = s, mem[idx][1] = e, idx/=2;
    while(idx){
        gen(mem[idx*2][0], mem[idx*2][1], mem[idx*2+1][0], mem[idx*2+1][1]);
    	mem[idx][0] = ims, mem[idx][1] = ime;
    	idx/=2;
    }
}

     
void buildWall(int n, int k, int *op, int *left, int *right, int *height, int *finalheight){
    int i, j;
    for(z=1; z<k; z*=2);
    for(i=0; i<k; i++){
    	if(mh<height[i]) mh = height[i];
    	af[cnt].x = left[i], af[cnt].y = height[i];
    	af[cnt].idx = i, af[cnt++].op = op[i];
    	//cout << cnt << " " << af[cnt].x << " " << af[cnt].y << " " << af[cnt].idx << " " << af[cnt].op << endl;
    	af[cnt].x = right[i] + 1, af[cnt].y = height[i];
    	af[cnt].idx = i, af[cnt++].op = 0;
    	//cout << cnt << " " << af[cnt].x << " " << af[cnt].y << " " << af[cnt].idx << " " << af[cnt].op << endl; 
    }
    
    sort(af, af + cnt);
    memset(mem,-1,sizeof(mem));
    
    i = j = 0;
    for(; i < n; i++){
    	for(; j < cnt; j++){
    		if(af[j].x > i)break;
    		if(af[j].op == 0)ins(z+af[j].idx, -1, -1);
    		else if(af[j].op == 1)ins(z+af[j].idx, af[j].y, mh);
    		else ins(z+af[j].idx, 0, af[j].y);
    	}
    	if(mem[1][0] == -1) finalheight[i] = 0;
    	else finalheight[i] = mem[1][0];
    }
}

int main()
{
  int n;
  int k;

  int i, j;  
  int status = 0;

  status = scanf("%d%d", &n, &k);
  assert(status == 2);

  int* op = (int*)calloc(sizeof(int), k);
  int* left = (int*)calloc(sizeof(int), k);
  int* right = (int*)calloc(sizeof(int), k);
  int* height = (int*)calloc(sizeof(int), k);
  int* finalHeight = (int*)calloc(sizeof(int), n);

  for (i = 0; i < k; i++){
    status = scanf("%d%d%d%d", &op[i], &left[i], &right[i], &height[i]);
    assert(status == 4);
  }

  buildWall(n, k, op, left, right, height, finalHeight);

  for (j = 0; j < n; j++)
    printf("%d\n", finalHeight[j]);
  
  return 0;
}
