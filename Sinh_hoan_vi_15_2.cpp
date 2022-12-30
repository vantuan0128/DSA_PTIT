#include <bits/stdc++.h>
using namespace std;
int OK = 0, n, A[15];
void in(){
	for(int i=1;i<=n;i++) cout<<A[i]<<" ";
	cout<<endl;
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
	cin>>n;
	for(int i=1;i<=n;i++) A[i]=i;
	while(!OK){
		in();
		sinh();
	}
}
