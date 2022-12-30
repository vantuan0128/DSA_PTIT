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

void makeNode(Node *root, int u, int v, char c){
	if(c=='L') root->left=new Node(v);
	else root->right=new Node(v);
}

void insert(Node *root, int u, int v, char c){
	if(root==NULL) return;
	if(root->val==u){
		makeNode(root,u,v,c);
	}
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

void PreOrder(Node *root){
	if(root==NULL) return;
	cout<<root->val<<' ';
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(Node *root){
	if(root==NULL) return;
	InOrder(root->left);
	cout<<root->val<<' ';
	InOrder(root->right);
}

void PostOrder(Node *root){
	if(root==NULL) return;
	PreOrder(root->left);
	PreOrder(root->right);
	cout<<root->val<<' ';
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
		PreOrder(root); cout<<endl;
		InOrder(root); cout<<endl;
		PostOrder(root); cout<<endl;
	}
	return 0;
}
