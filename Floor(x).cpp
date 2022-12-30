#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int res=-1;
		for(int i=0;i<n;i++){
			if(a[i]<=x) res=i;
		}
		if(res!=-1) cout<<res+1<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
