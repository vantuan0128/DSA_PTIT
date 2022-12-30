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

void insert(Node *root,int u, int v, char c){
	if(root==NULL) return;
	if(root->val==u){
		makeNode(root,u,v,c);
	}
	insert(root->left,u,v,c);
	insert(root->right,u,v,c);
}

int height(Node *root){
	if(root == NULL) return 0;
	return 1+max(height(root->left), height(root->right));
}

//Kiem tra cac node la co cung muc khong
bool check1(Node *root, int level, int n){
	if(root == NULL) return true;
	if(root->left == NULL && root->right == NULL && level < n) return false;
	return check1(root->left,level+1,n) && check1(root->right,level+1,n);
}

//Kiem tra cac node trung gian co dung 2 node con khong
bool check2(Node *root){
	if(root==NULL) return true;
	if((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL)) return false;
	return check2(root->left) && check2(root->right);
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
		int h=height(root);
		if(check1(root,1,h) && check2(root)){
			cout<<"Yes"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}
