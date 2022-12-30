#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int x[100000]={0}, y[100000]={0};
		int a[n], b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
			x[a[i]]=1;
		}
		for(int j=0;j<m;j++){
			cin>>b[j];
			y[b[j]]=1;
		}
		for(int i=0;i<100000;i++){
			if(x[i]==1||y[i]==1) cout<<i<<" ";
		}
		cout<<endl;
		for(int i=0;i<100000;i++){
			if(x[i]==1&&y[i]==1) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
