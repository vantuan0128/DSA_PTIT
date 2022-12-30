#include <bits/stdc++.h>
using namespace std;
void xuly(int A[],int n){
	stack<int> st;
	int R[n],i;
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && A[i]>=st.top()) st.pop();
		if(st.empty()) R[i]=-1;
		else R[i]=st.top();
		st.push(A[i]);
	}
	for(int i=0;i<n;i++) cout<<R[i]<<' ';
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int A[n];
		for(int i=0;i<n;i++) cin>>A[i];
		xuly(A,n);
	}
	return 0;
}
