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
        bool dp[n][n];
        int maxLen = 1;
        for (int j = 0; j < n; j++)
            dp[j][j] = true;
        for (int l = 2; l <= n; l++) {
            for (int j = 0; j < n - l + 1; j++) {
                int k = j + l - 1;
                if (l == 2)
                    dp[j][k] = (s[j] == s[k]);
                else
                    dp[j][k] = (s[j] == s[k]) && dp[j + 1][k - 1];
                if (dp[j][k])
                    maxLen = max(maxLen, k - j + 1);
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

