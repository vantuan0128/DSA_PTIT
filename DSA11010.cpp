/*
Cho cây nhị phân, nhiệm vụ của bạn là kiểm tra xem cây nhị phân có phải là một cây hoàn hảo hay không (perfect tree)? 
Một cây nhị phân được gọi là cây hoàn hảo nếu tất cả các node trung gian của nó đều có hai node con và tất cả các node lá đều có cùng một mức.
Input:
3
6
10 20 L 10 30 R 20 40 L 20 50 R 30 60 L 30 70 R
2
18 15 L 18 30 R
5
1 2 L 2 4 R 1 3 R 3 5 L 3 6 R
Output:
Yes
Yes
No
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
