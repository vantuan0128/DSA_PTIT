#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}

void in(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
		cout<<"Buoc "<<i+1<<": ";
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
