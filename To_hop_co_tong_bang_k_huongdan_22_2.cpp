#include<bits/stdc++.h>
using namespace std;
int n,x,a[25],c[25],ok;
void in(int n){
	cout<<"[";
	for(int i=1;i<n;i++){
		cout<<c[i]<<" ";
	}
	cout<<c[n]<<"]";
}
void quaylui(int i,int sum){
	int j;
	for(j=1;j<=n;j++){
		if(a[j] >= c[i-1] && sum + a[j] <=x){
		c[i] = a[j]; sum = sum+a[j];
		if(sum == x){
			in(i); ok=1;
		}
		else quaylui(i+1,sum);
		sum = sum -a[j];
	}
}
}
int main(){
	int t,i;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=1;i<=n;i++) cin>>a[i];
		c[0]=0;
		ok=0;
		quaylui(1,0);
		if(ok==0) cout<<-1;
		cout<<endl;
	}
}
