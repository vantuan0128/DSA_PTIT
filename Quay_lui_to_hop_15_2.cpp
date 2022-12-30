#include <bits/stdc++.h>
using namespace std;
int n, k, C[30];
void in(){
	for(int i=1;i<=k;i++) cout<<C[i]<<" ";
	cout<<endl;
}
void quaylui(int i){
	int j;
	for(j=C[i-1]+1;j<=n-k+i;j++){
			C[i]=j;
			if(i==n) in();
			else quaylui(i+1);
	}
}
main(){
	cin>>n>>k;
	C[0]=0;
	quaylui(1);	
}
