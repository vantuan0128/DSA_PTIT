#include <iostream>

#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string s;
        cin >> s;
        int n = s.length();
        s = "x" + s;
        bool dp[n + 1][n + 1];
        int maxLen = 1;
        for (int j = 1; j <= n; j++) dp[j][j] = true;
        for (int len = 2; len <= n; len++) {
            for (int i = 1; i <= n - len + 1; i++) {
                int j = i + len - 1;
                //F[i][j]: co do dai la len
                if (len == 2 && s[i] == s[j])
                    dp[i][j] = true;
                else dp[i][j] = (s[i] == s[j]) && dp[i + 1][j - 1];
                if (dp[i][j]) maxLen = max(maxLen, len);
            }
        }
        cout << "#" << i << " " << maxLen << endl;
    }
    return 0;
}

/*
Chuoi doi xung dai nhat
Example
Input:
2
ab
aaa

Output:
#1 1
#2 3
*/
