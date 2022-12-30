#include <bits/stdc++.h>
using namespace std;
int n,a[30],b[30]={0};
bool check(int a[],int n){
	for(int i=1;i<n;i++){
		if(a[i]==0) return false;
		if(abs(a[i+1]-a[i])==1) return false;
	}
	return true;
}
void in(){
	if(check(a,n)){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
	}
}
void ql(int i){
	int j;
	for(j=1;j<=n;j++){
		if(!b[j]){
			a[i]=j; b[j]=1;
			if(i==n) in();
			else ql(i+1);
			b[j]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		a[0]=0;
		ql(1);
	}
}
