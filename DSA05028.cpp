/*
Cho hai xâu ký tự str1, str2 bao gồm các ký tự in thường và các thao tác dưới đây:

Insert: chèn một ký tự bất kỳ vào str1.
Delete: loại bỏ một ký tự bất kỳ trong str1.
Replace: thay một ký tự bất kỳ trong str1.
Nhiệm vụ của bạn là đếm số các phép Insert, Delete, Replace ít nhất thực hiện trên str1 để trở thành str2.
T, str1, str2 thỏa mãn ràng buộc: 1≤T≤100;  1≤length(str1),length(str2) ≤100.
Input:
1
geek gesek
Output:
1
*/
#include<bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.length();
        int m = s2.length();
        s1 = "a" + s1;
        s2 = "a" + s2;
        int dp[n+1][m+1];
        dp[0][0] = 0;
        for(int i = 1; i <= m; i++) {
            dp[0][i] = i;
        }
        for(int i = 1; i <= n; i++) {
            dp[i][0] = i;
        }
        for(int i = 1; i <= n; i ++) {
            for(int j = 1; j <= m ; j++) {
                if(s1[i] == s2[j]) {
                    dp[i][j] = dp[i-1][j-1];
                }
                else {
                    dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1;
                }
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}
