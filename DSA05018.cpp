/*
Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự.
Hãy tìm xâu con đối xứng dài nhất của S.
Input:
2
abcbadd
aaaaa
Output:
5
5
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        s = "a" + s;
        int dp[n+1][n+1];
        memset(dp, 0 , sizeof(dp)); 
        for(int i = n; i >= 1; i--) {
            for(int j = i; j <= n; j++) {
                if(i == j) dp[i][j] = 1;
                else if(j - i == 1) {
                    if(s[i] == s[j]) {
                        dp[i][j] = 2;
                    }
                }
                else {
                    if(s[i] == s[j]) {
                        if(dp[i+1][j-1] > 0) {
                            dp[i][j] = dp[i+1][j-1] + 2;
                        }
                    }
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <=n;j++) {
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
