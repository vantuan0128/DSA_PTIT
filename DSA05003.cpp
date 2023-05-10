/*
Cho ba xâu ký tự X, Y, Z. Nhiệm vụ của bạn là tìm độ dài dãy con chung dài nhất có mặt trong cả ba xâu.
T, X, Y, Z thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ size(X), size(Y), size(Z) ≤ 100.
Input:
2
5 8 13
geeks geeksfor geeksforgeeks
7 6 5
abcd1e2 bc12ea bd1ea
Output:
5
3
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    getchar();
    while(T--) {
        int m, n, p;
        cin >> m >> n >> p;
        getchar();
        string s, t, u;
        cin >> s >> t >> u;
        s = "a" + s;
        t = "a" + t;
        u = "a" + u;
        int dp[m+1][n+1][p+1];
        for(int i = 0; i <=m ; i++) {
            for(int j = 0; j <= n ; j++) {
                for(int k = 0; k <= p; k++) {
                    if(i == 0 || j == 0 || k == 0) {
                        dp[i][j][k] = 0;
                    }
                    else {
                        if(s[i] == t[j] && t[j] == u[k]) {
                            dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                        }
                        else {
                            dp[i][j][k] = max(dp[i][j-1][k], max(dp[i-1][j][k], dp[i][j][k-1]));
                        }
                    }
                }
            }
        }
        cout << dp[m][n][p] << endl;
    }
    return 0;
}
