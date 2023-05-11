/*
Cho cây nhị phân, nhiệm vụ của bạn là duyệt cây theo xoắn ốc (spiral-order). Phép. Ví dụ với cây dưới đây sẽ cho ta kết quả của phép duyệt spiral-order: 1 2 3  4 5 6 7.
Đưa ra kết quả phép duyệt level-order theo từng dòng.
Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R
Output:
1 3 2
10 0 30 60 40
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
