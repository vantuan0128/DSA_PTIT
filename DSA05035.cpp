/*
Xét các số X có các chữ số được sắp xếp tăng dần, tức a[1] ≤ a[2] ≤ … ≤ a[N] trong đó a[1], a[2], …, a[N] lần lượt là các chữ số của X. Chẳng hạn 223, 8999, …
Cho trước số chữ số N. Nhiệm vụ của bạn là đếm xem có bao nhiêu số như vậy.
Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 10^9+7.

Input:
3
1
2
3
Output:
10
55
220
*/
#include<bits/stdc++.h>

using namespace std;

int dp[105][10];
int MOD = 1e9 + 7;
void khoitao() {
    for(int i = 0; i <= 9; i++ ) {
        dp[1][i] = 1;
    }
    for(int i =2 ; i <= 100; i++) {
        dp[i][0] = 1;
        for(int j = 1; j <= 9; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            dp[i][j] %= MOD;
        }
    }
}

int main() {
    int t;
    cin >> t;
    khoitao();
    while(t--) {
        int n;
        cin >> n;
        long long ans = 0;
        for(int i = 0; i <= 9; i++) {
            ans += dp[n][i];
            ans %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
