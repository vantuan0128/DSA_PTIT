#include <bits/stdc++.h>
using namespace std;
int n,a[50];
int Check(){
	if(n<6) return 0;
	if(a[1]==0||a[n]==1) return 0;
	for(int i=1;i<=n-1;i++){
		if(a[i]==1 && a[i+1]==1) return 0;
	}
	for(int i=1;i<=n-3;i++){
		if(a[i]==0 && a[i+1]==0 && a[i+2]==0 &&a[i+3]==0) return 0;
	}
	return 1;
}
void in(){
	if(Check()==1){
		for(int i=1;i<=n;i++){
			if(a[i]==0) cout<<"6";
			else cout<<"8";
		}
		cout<<endl;
	}
}
void quaylui(int i){
	int j;
	for(j=0;j<=1;j++){
		a[i]=j;
		if(i == n) { 
			in();
		}
		else quaylui(i+1);
	}
}
int main(){
	cin>>n;
	quaylui(1);
	return 0;
}
