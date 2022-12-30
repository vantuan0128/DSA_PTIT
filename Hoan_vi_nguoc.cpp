#include <bits/stdc++.h>
using namespace std;
int n,mark[11]={0}, a[11];
void in(){
	int i;
	for(i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void Try(int i){
	for(int j=n;j>=1;j--){
		if(!mark[j]){
			mark[j]=1;
			a[i]=j;
			if(i==n) 
			in();
			else{
				Try(i+1);
			}
			mark[j]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){	
		cin>>n;
		Try(1);
		cout<<endl;
	}
	return 0;
}
