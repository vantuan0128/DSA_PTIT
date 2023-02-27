/*
Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. 
Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).
Input:
2
2 2
4 2
Output:
2
5
Giải thích test 1: Có 2 cách đó là (1, 1) và (2).
Giải thích test 2: 5 cách đó là: (1, 1, 1, 1), (1, 1, 2), (1, 2, 1), (2, 1, 1), (2, 2).
*/
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
