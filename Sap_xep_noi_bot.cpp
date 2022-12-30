#include <bits/stdc++.h>
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
void sapxep(int a[], int n){
	int i,j,t,ok;
	for(i=0;i<n;i++){
		ok = 1;
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				ok=0;
				t=a[j]; a[j]=a[j+1]; a[j+1]=t;
			}
		}
		if(ok) break;
		cout<<"Buoc "<< (i+1)<<": ";
		in(a,n);
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	sapxep(a,n);
	return 0;
}
