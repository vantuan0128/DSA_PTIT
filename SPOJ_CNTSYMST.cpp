#include <bits/stdc++.h>

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
        int dp[n + 1][n + 1];
        memset(dp,0,sizeof(dp));
        int count = 0;
        for (int j = 1; j <= n; j++) dp[j][j] = 1; // Xau co do dai la 1
        for (int len = 2; len <= n; len++) {
            for (int i = 1; i <= n - len + 1; i++) {
                int j = i + len - 1;
                if (len == 2 && (s[i] == s[j])) {
                	dp[i][j] = 1;
				}
                else {
					dp[i][j] = (s[i] == s[j]) && dp[i + 1][j - 1];
				}
            }
        }
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= n; j++){
        		if(dp[i][j]) count++;
			}
		}
        cout << "#" << i << " " << count << endl;
    }
    return 0;
}

/*
Input:
2
ab
aaa

Output:
#1 2
#2 6
*/
