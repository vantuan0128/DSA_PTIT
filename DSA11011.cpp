/*
Cây biểu thức là một cây nhị phân trong đó mỗi node trung gian là một phép toán, mỗi node lá là một toán hạng. 
Ví dụ với biểu thức P = 3 + ((5+9)*2) sẽ được biểu diễn như cây dưới đây.
Đối với cây biểu thức, duyệt theo thứ tự trước ta sẽ được biểu thức tiền tố, duyệt theo thứ tự sau ta sẽ được biểu thức hậu tố, 
duyệt theo thứ tự giữa ta được biểu thức trung tố. Chú ý, cây biểu thức luôn là cây nhị phân đầy (mỗi node trung gian đều có hai node con).
Cho biểu thức hậu tố P, hãy sử dụng cây biểu thức để đưa ra biểu thức trung tố tương ứng với biểu thức P.
Input:
2
ab+ef*g*-
wlrb+-*
Output:
a + b - e * f * g
w * l - r + b
*/
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
