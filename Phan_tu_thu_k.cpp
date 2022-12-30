#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+m];
		for(int i=0;i<n+m;i++) cin>>a[i];
		sort(a,a+n+m);
		cout<<a[k-1]<<endl;
	}
	return 0;
}
