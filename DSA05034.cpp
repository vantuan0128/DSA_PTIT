/*
Khu vui chơi trẻ em thiết kế một cầu thang có N bậc để di chuyển lên đỉnh tháp. 
Sinh viên PTIT cũng được phép leo lên cầu thang này nhưng nhìn chung chân sinh viên PTIT khá là dài 
nên có thể đi từ 1 đến K bậc mỗi bước (chứ không chỉ là 1 bậc như trẻ em).
Hãy tính xem sinh viên PTIT có bao nhiêu cách để leo lên đến đỉnh.
Input:
2
2 2
4 2
Output:
2
5
*/

#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int j = 1; j <= n; j++) {
            for(int i = 1; i <=k ;i++) {
                if(j >= i) {
                    dp[j] += dp[j-i];
                    dp[j] %= MOD;
                }
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}
