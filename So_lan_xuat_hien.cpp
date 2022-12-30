#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
		int dem=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==x) dem++;
		}
		if(dem!=0) cout<<dem<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
