#include <bits/stdc++.h>
using namespace std;

//cach 2: Quy hoach dong
int qhd(int a[], int n){
	int i,j,F[1005],kq=0;
	for(i=0;i<n;i++){
		F[i]=a[i];
		for(j=0;j<i;j++){
			if(a[j]<a[i]) {
				F[i]=max(F[i],F[j]+a[i]);
			}
		}
		kq=max(kq,F[i]);
	}
	return kq;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1],dp[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		memset(dp,0,sizeof(dp));
		dp[0]=a[0];
		for(int i=1;i<n;i++){
			dp[i]=a[i];
			for(int j=0;j<i;j++){
				if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+a[i]);
			}
		}
		sort(dp,dp+n);
		cout<<dp[n-1]<<endl;
	}
	return 0;
}
