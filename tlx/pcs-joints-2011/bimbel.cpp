#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	vector<Node *> child;
};

Node *newNode(int key) {
   Node *temp = new Node;
   temp->data = key;
   return temp;
}

int get_all_leaves(Node *root, int m) {
	int ret, i;
	ret = 0;
	queue<Node *> q;
	q.push(root);
	
	while(!q.empty()) {
		Node *tmp = q.front();
		q.pop();
		
		if(tmp->child.size() < m) ret++;
		for(i = 0; i < tmp->child.size(); i++) {
			q.push(tmp->child[i]);
		}
		//cout << "asem2 jawa " << tmp->child.size() << " " << ret  << " "<< endl;
	}
	return ret;
}


int solve(int n, int m) {
	Node *root = newNode(1);
	int i;
	
	queue<Node *> q;
	q.push(root);
	while(!q.empty()&&n) {
		Node *tmp = q.front();
		q.pop();
		
		for(i = 0; i < m && n; i++) {
			(tmp->child).push_back(newNode(1));
			q.push(tmp->child[i]);
			n--;
		}
	}
	
	return get_all_leaves(root, m); 
}

int n, m;
int main() {
	scanf("%d %d",&n, &m);
	printf("%d\n", solve(n, m));
	return 0;
} 
