#include <bits/stdc++.h>
using namespace std;
int n, B[30];
void in(){
	for(int i=1;i<=n;i++) cout<<B[i]<<" ";
	cout<<endl;
}
void quaylui(int i){
	int j;
	for(j=0;j<=1;j++){
			B[i]=j;
			if(i==n) in();
			else quaylui(i+1);
	}
}
main(){
	cin>>n;
	quaylui(1);	
}
