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

void makeNode(Node *root,int u, int v, char c){
	if(c=='L') root->left=new Node(v);
	else root->right=new Node(v);
}

void insert(Node *root, int u ,int v, char c){
	if(root==NULL) return;
	if(root->val==u) makeNode(root,u,v,c);
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

bool identical(Node *root1, Node *root2){
	if(root1==NULL && root2==NULL) return true;
	if(root1!=NULL && root2!=NULL){
		return  (root1->val == root2->val) && identical(root1->left,root2->left) && identical(root1->right,root2->right);
	}
	return false;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n1; cin>>n1;
		Node *root1=NULL;
		while(n1--){
			int u,v; char c;
			cin>>u>>v>>c;
			if(root1==NULL){
				root1=new Node(u);
				makeNode(root1,u,v,c);
			}
			else insert(root1,u,v,c);
		}
		int n2; cin>>n2;
		Node *root2=NULL;
		while(n2--){
			int u,v; char c;
			cin>>u>>v>>c;
			if(root2==NULL){
				root2=new Node(u);
				makeNode(root2,u,v,c);
			}
			else insert(root2,u,v,c);
		}
		if(identical(root1,root2)) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
