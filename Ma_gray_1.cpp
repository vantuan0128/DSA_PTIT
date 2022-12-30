#include<bits/stdc++.h>
using namespace std;
int n,x[20];
void in(){
	cout<<x[1];
	for(int i=2;i<=n;i++){
		if(x[i]!=x[i-1]) cout<<1;
		else cout<<0;
	}
	cout<<" ";
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n) in();
		else ql(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		cin>>n;
		ql(1);
		cout<<endl;
	}
}
