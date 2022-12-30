#include <bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node *left, *right;
	Node(int x){
		val=x;
		left=right=NULL;
	}
};

void makeNode(Node *root,int u,int v, char c){
	if(c=='L') root->left=new Node(v);
	else root->right=new Node(v);
}

void insert(Node *root, int u, int v, char c){
	if(root==NULL) return;
	if(root->val==u)makeNode(root,u,v,c);
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

bool check(Node *root){
	if(root==NULL) return true;
	if((root->left!=NULL&&root->right==NULL) || (root->left==NULL && root->right!=NULL)) return false;
	return check(root->left) && check(root->right);
}

int main(){
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
		else cout<<0<<endl;]
	}
	return 0;
}
