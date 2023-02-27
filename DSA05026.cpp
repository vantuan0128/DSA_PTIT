/*
John có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa những con bò đi xem phim.
Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w[i] của từng con (đều nhỏ hơn C), hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.
Input:
259 5
81
58
42
33
61
Output:242
*/
#include <bits/stdc++.h>
using namespace std;
int c,n,a[101],dp[101][25001];
int main(){
	cin>>c>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=c;i++) dp[0][i]=0;
	for(int i=1;i<=n;i++) {
		for(int j=1; j<=c;j++){
			if(a[i]<=j) dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][c]<<endl;
	return 0;
}
