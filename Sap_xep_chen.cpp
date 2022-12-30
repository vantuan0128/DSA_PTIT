#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}

void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

void sapxep(int a[], int n){ 
	int i,j,t,key;
	cout<<"Buoc 0: "<<a[0]<<endl;
	for(i=1;i<n;i++){
		key=a[i]; j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		cout<<"Buoc "<<i<<": ";
		in(a,i+1);
	}
}

int main(){
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	sapxep(a,n);
	return 0;
}
