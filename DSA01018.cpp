/*
Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử trước đó của X[].
Ví dụ N=5, K=3, X[] ={2, 3, 5} thì tập con trước đó của X[] là {2, 3, 4}. Chú ý nếu tập con trong input là đầu tiên thì trước đó là tập con cuối cùng.
Input:
2
5  3
2  3  5
5  3
1  2  3
Output:
2 3 4
3 4 5
*/
#include <bits/stdc++.h>
using namespace std;
int n, k, C[1001];
void in(){
	for(int i=1;i<=k;i++) cout<<C[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i = k, j;
	while(C[i]-C[i-1] == 1 && i >= 1) i--;
	if(i==1){
		for(j=1;j<=k;j++) C[j]=n-k+j;
		in();
	}
	else {
		C[i]--;
		for(j=i+1;j<=k;j++) C[j]=n-k+j;
		in();
	}
}
main(){
	int t,i; cin>>t;
	while(t--){
		cin>>n>>k; C[0]=0;
		for(i=1;i<=k;i++) cin>>C[i];
		sinh();
	}
}
