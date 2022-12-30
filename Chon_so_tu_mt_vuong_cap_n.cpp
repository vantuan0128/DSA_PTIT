#include <bits/stdc++.h>
using namespace std;
int OK = 0, n, A[15], C[15][15]={0},k,dem=0;
void xuly1(){
	int i,t=0;
	for(i=1;i<=n;i++) t=t+C[i][A[i]];
	if(t==k) dem++;
}
void xuly2(){
		int i,t=0;
	for(i=1;i<=n;i++) t=t+C[i][A[i]];
	if(t==k) {
		for(i=1;i<=n;i++) cout<<A[i]<<" ";
		cout<<endl;
	}
}
void sinh(){
	int i=n-1,j,t;
	while(A[i]>A[i+1]) i--;
	if(i==0) OK=1;
	else{
		j=n;
		while(A[j]<A[i]) j--;
		t=A[i]; A[i]=A[j]; A[j]=t;
		int d=i+1, c=n;
		while(d<c){
			t=A[d]; A[d]=A[c]; A[c]=t;
			d++;c--;
		}
	}
}
main(){
	int i,j;
	cin>>n>>k;
	for(int i=1;i<=n;i++) A[i]=i;
	for(int i=1;i<=n;i++) for(j=1;j<=n;j++) cin>>C[i][j];
	while(!OK){
		xuly1();
		sinh();
	}
	cout<<dem<<endl;
	OK=0;
	for(i=1;i<=n;i++) A[i]=i;
	while(!OK){
		xuly2();
		sinh();
	}
}
