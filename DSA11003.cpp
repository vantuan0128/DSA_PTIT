/*
Cho phép duyệt cây nhị phân Inorder và Preorder, hãy đưa ra kết quả phép duyệt Postorder của cây nhị phân. 
Ví dụ với cây nhị phân có các phép duyệt cây nhị phân của cây dưới đây:

         1
      /    \    
     2       3
   /   \      \
  4     5      6
Inorder     : 4  2  5  1  3  6

Preorder:  : 1  2  4  5  3  6

Postorder : 4  5  2  6  3  1 

Đưa ra kết quả phép duyệt Postorder theo từng dòng.
Input:
1
6
4  2  5  1  3  6
1  2  4  5  3  6
Output:
4  5  2  6  3  1
*/
#include <bits/stdc++.h>
using namespace std;

int search(int in[], int x, int n){
	for(int i=0;i<n;i++){
		if(in[i]==x) return i;
	}
	return -1;
}

void PostOrder(int in[], int pre[], int n){
	int root = search(in,pre[0],n);
	if(root != 0) PostOrder(in,pre+1,root);
	if(root != n-1) PostOrder(in+root+1,pre+root+1,n-root-1);
	cout<<pre[0]<<' '; 
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int in[n],pre[n];
		for(int i=0;i<n;i++) cin>>in[i];
		for(int i=0;i<n;i++) cin>>pre[i];
		PostOrder(in,pre,n);
		cout<<endl;
	}
	return 0;
}
