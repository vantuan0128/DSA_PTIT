/*
Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. Khi đi qua ô (i, j), điểm nhận được bằng A[i][j].
Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất.
Với mỗi test, in ra độ dài dãy con tăng dài nhất trên một dòng.
Input:
1
3 3
1 2 3
4 8 2
1 5 3
Output:
8
Giải thích test: Đường đi (1, 1) à (1, 2) à (2, 3) à (3, 3).
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n+1][m+1];
        long long dp[n+1][m+1];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 && j == 0) {
                    dp[i][j] = a[i][j];
                }
                else if(i == 0) {
                    dp[i][j] = dp[i][j-1] + a[i][j]; 
                }
                else if(j == 0) {
                    dp[i][j] = dp[i-1][j] + a[i][j];
                }
                else {
                    dp[i][j] = min(dp[i-1][j-1] + a[i][j], min(dp[i-1][j] + a[i][j], dp[i][j-1] + a[i][j]));
                }
            }
        }
        cout << dp[n-1][m-1]<< endl;
    }
    return 0;
}

