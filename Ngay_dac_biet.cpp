#include <bits/stdc++.h>
using namespace std;
int n=8;
int a[100];
void in(){
	if( !(a[1]==0&&a[2]==0) && !(a[3]==1) && !(a[3]==0&&a[4]==0) && !(a[5]==0)){
	for(int i=1;i<=n;i++){
		if(a[i]==0) cout<<"0";
		else cout<<"2";
		if(i==2||i==4) cout<<"/";
	}
	cout<<endl;
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==8) in();
		else ql(i+1);
	}
}
int main(){
	ql(1);
	return 0;
}
