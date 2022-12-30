#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	int n,S; 
	while(t--){
		int check[40001];
		memset(check,0,sizeof(check));
		cin>>n>>S;
		int a[201];
		check[0] = 1;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){
			//Set tu S -> a[i]
			for(int j= S; j>=a[i]; j--){
				if(check[j-a[i]] == 1){
					check[j] = 1;
				}
			}
		}
		if(check[S]==1) cout<<"YES\n";
			else cout<<"NO\n";
	}
	return 0;
}
