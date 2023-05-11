/*
Cho cây nhị phân, nhiệm vụ của bạn là kiểm tra xem cây nhị phân có phải là một cây đủ hay không (full binary tree)? 
Một cây nhị phân được gọi là cây đủ nếu tất cả các node trung gian của nó đều có hai node con.
Input:
2
4
1 2 L 1 3 R 2 4 L 2 5 R
3
1 2 L 1 3 R 2 4 L
Output:
1
0
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

struct Node{
	int val;
	Node *left, *right;
	Node(int x){
		val=x;
		left=right=NULL;
	}
};

void makeNode(Node *root, int u, int v, char c){
	if(c=='L') root->left=new Node(v);
	else root->right=new Node(v);
}

void insert(Node *root, int u, int v, char c){
	if(root==NULL) return;
	if(root->val==u) makeNode(root,u,v,c);
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

bool check(Node *root){
	if(root==NULL) return true;
	if((root->left!=NULL&&root->right==NULL)||(root->left==NULL&&root->right!=NULL)) return false;
	return check(root->left) && check(root->right);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		Node *root=NULL;
		while(n--){
			int u,v; char c;
			cin>>u>>v>>c;
			if(root==NULL){
				root=new Node(u);
				makeNode(root,u,v,c);
			}
			else insert(root,u,v,c);
		}
		if(check(root)) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
