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
	if(root->val == u){
		makeNode(root,u,v,c);
	}
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

void SpiralOrder(Node *root){
	stack <Node *> s1,s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()){
		while(!s1.empty()){
			Node *tmp=s1.top(); s1.pop();
			cout<<tmp->val<<' ';
			if(tmp->right!=NULL) s2.push(tmp->right);
			if(tmp->left!=NULL) s2.push(tmp->left);
		}
		while(!s2.empty()){
			Node *tmp=s2.top(); s2.pop();
			cout<<tmp->val<<' ';
			if(tmp->left!=NULL) s1.push(tmp->left);
			if(tmp->right!=NULL) s1.push(tmp->right);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		Node *root = NULL;
		while(n--){
			int u,v; char c;
			cin>>u>>v>>c;
			if(root==NULL){
				root=new Node(u);
				makeNode(root,u,v,c);
			}
			else insert(root,u,v,c);
		}
		SpiralOrder(root);
		cout<<endl;
	}
	return 0;
}
