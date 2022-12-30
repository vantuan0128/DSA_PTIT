#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i]==m){
				dem++;
				break;
			}
		}
		if(dem==1) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
