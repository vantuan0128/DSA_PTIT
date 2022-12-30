#include <bits/stdc++.h>
using namespace std;

struct Node{
	char c;
	Node *left, *right;
	Node(char x){
		c = x;
		left = right = NULL;
	}
};

bool check(char c){
	return c=='+'||c=='-'||c=='*'||c=='/';
}

//Left-Node-Right
void InOrder(Node *root){
	if(root==NULL) return;
	InOrder(root->left);
	cout<<root->c;
	InOrder(root->right);
}

void solve(string s){
	stack <Node *> st;
	Node *root;
	for(int i=0;i<s.length();i++){
		if(!check(s[i])) st.push(new Node(s[i]));
		else{
			Node *tmp= new Node(s[i]);
			Node *t1 = st.top(); st.pop();
			Node *t2 = st.top(); st.pop();
			tmp->left = t2;
			tmp->right = t1;
			st.push(tmp);
		}
	}
	root=st.top();
	InOrder(root);
}

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		solve(s);
		cout<<endl;
	}
	return 0;
}
