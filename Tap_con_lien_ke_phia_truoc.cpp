#include <bits/stdc++.h>
using namespace std;
int n, k, C[1001];
void in(){
	for(int i=1;i<=k;i++) cout<<C[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i = k, j;
	while(C[i]-C[i-1] == 1 && i >= 1) i--;
	if(i==1){
		for(j=1;j<=k;j++) C[j]=n-k+j;
		in();
	}
	else {
		C[i]--;
		for(j=i+1;j<=k;j++) C[j]=n-k+j;
		in();
	}
}
main(){
	int t,i; cin>>t;
	while(t--){
		cin>>n>>k; C[0]=0;
		for(i=1;i<=k;i++) cin>>C[i];
		sinh();
	}
}
