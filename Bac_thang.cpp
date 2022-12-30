#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
int dp[1000001];

int solve(int n, int k){
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=min(i,k); j++){
			dp[i]=(dp[i]+dp[i-j])%MOD;
		}
	}
	return dp[n];
}

int main(){
	int t; cin >> t;
	while (t--){
		int n,k; cin >> n >> k;
		cout << solve(n,k) << "\n";
	}
	return 0;
}
