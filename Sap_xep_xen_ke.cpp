#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
void in(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(i<n-1-i)	cout<<a[n-1-i]<<" "<<a[i]<<" ";
		if(i==n-1-i) cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		in(a,n);
	}
	return 0;
}
