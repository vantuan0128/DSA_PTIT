/*
Cho hai số nguyên lớn N và M có không quá 1000 chữ số. Người ta muốn tính xem liệu có thể lấy ra nhiều nhất bao nhiêu 
chữ số trong N (không cần liên tiếp) và giữ nguyên thứ tự của nó để tạo ra một số X sao cho ta cũng có thể tìm thấy X trong số M theo cách tương tự.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, dòng thứ nhất ghi số N, dòng thứ 2 ghi số M.

Output:  Với mỗi test, hãy in ra số chữ số nhiều nhất có thể của X.

Input:
2
144615
4976135
44
88
Output:
4
0
Giải thích test 1: số X tìm được là 4615.
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s,t;
        cin >> s >> t;
        int n = s.length(), m = t.length();
        s = "a" + s;
        t = "a" + t;
        int dp[n+1][m+1];
        for(int i = 0; i <=n ;i++) {
            for(int j = 0; j <=m;j++) {
                if(i == 0 || j == 0) {
                    dp[i][j] = 0;
                }
                else {

                    if(s[i] == t[j]) {
                        dp[i][j] = dp[i-1][j-1] + 1;
                    }
                    else {
                        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                    }
                }
            }
        }
        cout << dp[n][m] << endl;
    }
}
