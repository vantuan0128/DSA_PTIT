#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
void in(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n];
		nhap(a,n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++){
				if(abs(m-a[j])>abs(m-a[j+1])){
					swap(a[j],a[j+1]);
				}
			}
		}
		in(a,n);
	}
	return 0;
}
