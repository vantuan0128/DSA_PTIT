/*
Cho cây nhị phân, nhiệm vụ của bạn là duyệt cây theo Level-order. Phép duyệt level-order trên cây là phép thăm node theo từng mức của cây. 
Ví dụ với cây dưới đây sẽ cho ta kết quả của phép duyệt level-order: 20  8  22  4  12  10  14.
Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R
Output:
1 3 2
10 20 30 40 60
*/
#include <bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node *left, *right;
	Node(int x){
		val = x;
		left = right = NULL;
	}
};

void makeNode(Node *root, int u, int v, char c){
	if(c == 'L') root->left=new Node(v);
	else root->right= new Node(v);
}

void insert(Node *root, int u, int v, char c){
	if(root == NULL) return ;
	if(root->val == u) makeNode(root,u,v,c);
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

void LevelOrder(Node *root){
	queue <Node *> q;
	q.push(root);
	while(!q.empty()){
		Node *tmp=q.front(); q.pop();
		cout<<tmp->val<<' ';
		if(tmp->left != NULL) q.push(tmp->left);
		if(tmp->right != NULL) q.push(tmp->right);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Node *root = NULL;
		while(n--){
			int u,v; char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new Node(u);
				makeNode(root,u,v,c);
			}
			else insert(root,u,v,c);
		}
		LevelOrder(root);
		cout<<endl; 
	}
	return 0;
}
