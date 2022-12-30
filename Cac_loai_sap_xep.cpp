#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void sapxep1(int a[], int n){ //doi cho truc tiep
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i]; a[i]=a[j]; a[j]=t;
			}
		}
		cout<<"Buoc "<<(i+1)<<": ";
		in(a,n);
	}
}
void sapxep2(int a[], int n){ //sap xep chon
	int i,j,t,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])	min=j;
			t=a[i]; a[i]=a[min]; a[min]=t;
		}
		cout<<"Buoc "<<(i+1)<<": ";
		in(a,n);
	}
}
void sapxep3(int a[], int n){ //sap xep chen
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
void sapxep4(int a[], int n){ //sap xep noi bot
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
main(){
	int n, a[200];
	cin>>n;
	nhap(a,n);
	sapxep2(a,n);
}
