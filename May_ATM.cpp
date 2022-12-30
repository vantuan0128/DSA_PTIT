#include <bits/stdc++.h>
using namespace std;
int n,S,k;
int a[100],X[100];
int ans=0;
void Try(int i){
	for(int j=X[i-1]+1;j<=n-k+i; j++){
		X[i]=j;
		if(i == k){
			int sum=0;
			for(int j=1; j<=k; j++){
				sum+=a[X[j]];
			}
			if(sum == S){
				ans = k; return;
			}
		}
		else Try(i+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int ok=0;
		cin>>n>>S;
		for(int i=1; i <= n; i++) cin>>a[i];
		sort(a+1,a+n+1);
		for(int i = 1; i <= n; i++){
			k = i;
			Try(1);
			if(ans){
				cout<<ans<<endl;
				ans=0;
				k=0;
				ok=1;
				break;
			}
		}
		if(ok == 0) cout<<"-1"<<endl;
	}
	return 0;
}
