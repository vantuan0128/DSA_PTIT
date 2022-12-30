#include <bits/stdc++.h>
using namespace std;
int a[105][105], dp[105][105];
int main(){
	int t; cin>>t;
	while(t--){
		int m,n; cin>>m>>n;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				dp[i][j]=0;
			}
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(i==1||j==1) dp[i][j]=1;
				else dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		cout<<dp[m][n]<<endl; 
	}
}
