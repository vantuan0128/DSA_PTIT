#include <bits/stdc++.h>
using namespace std;
int n, A[20], B[20]={0};
void in(){
	for(int i=1;i<=n;i++) cout<<A[i]<<" ";
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
	quaylui(1);	
}
