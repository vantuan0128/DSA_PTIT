#include <bits/stdc++.h>
using namespace std;
int n, A[20], B[20]={0},a[10000];
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[A[i]]<<" ";
	}
	cout<<endl;
}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(!B[j]){
			A[i]=j; B[j]=1;
			if(i==n) in();
			else quaylui(i+1);
			B[j]=0;
		}
	}
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	quaylui(1);	
}
