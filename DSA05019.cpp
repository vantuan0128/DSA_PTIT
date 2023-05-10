/*
Cho một bảng số N hàng, M cột chỉ gồm 0 và 1. Bạn hãy tìm hình vuông có kích thước lớn nhất, sao cho các số trong hình vuông toàn là số 1.
Với mỗi test, in ra đáp án là kích thước của hình vuông lớn nhất tìm được trên một dòng.
Input:
2
6 5
0 1 1 0 1
1 1 0 1 0
0 1 1 1 0
1 1 1 1 0
1 1 1 1 1
0 0 0 0 0
2 2
0 0
0 0
Output:
3
0
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n+5][m+5];
        for(int i = 1; i <=n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        int dp[n+5][m+5];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <=m;j++) {
                if(i == 0 || j == 0) {
                    dp[i][j] = 0;
                }
                else {
                    if(a[i][j] == 1) {
                        dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
                    }
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <=m;j++) {
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans << endl;
    }   
    return 0;
}
