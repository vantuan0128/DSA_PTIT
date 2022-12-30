#include <bits/stdc++.h>
using namespace std;
int n,k,x[20];
void in();
void ql(int i){
	for(int j=n-k+i;j>=x[i-1]+1;j--){
			x[i]=j;
			if(i==k) in();
			else ql(i+1);
	}
}
void in(){
	for(int i=1;i<=k;i++) {
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		x[0]=0;
		ql(1);
	}
}
