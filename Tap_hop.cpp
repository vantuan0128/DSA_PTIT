#include <bits/stdc++.h>
using namespace std;
int n, k, s, C[30],dem;
void xuly(){
	int t=0;
	for(int i=1;i<=k;i++) t=t+C[i];
	if(t==s) dem++;
}
void quaylui(int i){
	int j;
	for(j=C[i-1]+1;j<=n-k+i;j++){
			C[i]=j;
			if(i==k) xuly();
			else quaylui(i+1);
	}
}
main(){
	while(1){
		cin>>n>>k>>s;
		if(!n&&!k&&!s) break;
		C[0]=0; dem=0;
		quaylui(1);
		cout<<dem<<endl;
	}
	
}
