#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6+10;

struct node{
    int l,r;
    int maxv,id;
}Tree[maxn*4];

int ans[maxn];

void helper(int k){
    Tree[k].maxv = max(Tree[k*2].maxv,Tree[k*2+1].maxv);
    if(Tree[k*2].maxv >= Tree[k*2+1].maxv)
        Tree[k].id = Tree[k*2].id;
    else 
    	Tree[k].id = Tree[k*2+1].id;
    return;
}

void Build(int l,int r,int k) {
	//cout << " asem2 jawa " << endl;
	//cout << l << " " << r << " " << k << endl;
    Tree[k].l = l,Tree[k].r = r;
    if(l == r){
        Tree[k].maxv = 0;
        Tree[k].id = l;
        return ;
    }
    int mid = (l + r)/2;
    //cout << mid << endl;
    Build(l,mid,k*2);
    Build(mid+1,r,k*2+1);
    helper(k);
}

void update(int pos,int v,int k){
		
    if(Tree[k].l == Tree[k].r){
        Tree[k].maxv += v;
        return ;
    }
    int mid = (Tree[k].l + Tree[k].r)/2;
    if(pos <= mid) update(pos,v,k*2);
    else update(pos,v,k*2+1);
    helper(k);
}

int main() {
    int T;
    scanf("%d",&T);
    while(T--) {
        int n,q;
        cin >> n >> q;
        Build(1,n,1);
        for(int i = 1; i <= q; i++){
            int id,val;
            scanf("%d%d",&id,&val);
            update(id,val,1);
            ans[i] = Tree[1].id;
        }
        int pos;
        for(int i = q; i > 0; i--){
            if(ans[i] != ans[q])
                break;
            pos = i;
        }
        if(pos == 1 && ans[pos] == 1)
            printf("0\n");
        else
            printf("%d\n",pos);
        
    }
    return 0;
}
