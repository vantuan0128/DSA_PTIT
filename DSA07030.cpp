/*
Cho một bảng kích thước NxM, được chia thành lưới ô vuông đơn vị N dòng M cột. Trên các ô của bảng ghi số 0 hoặc 1. 
Các dòng của bảng được đánh số 1, 2... N theo thứ tự từ trên xuống dưới và các cột của bảng được đánh số 1, 2..., M theo thứ tự từ trái qua phải

Yêu cầu: Hãy tìm một hình chữ nhật gồm các ô của bảng thoả mãn các điều kiện sau:

1 - Hình chữ nhật đó chỉ gồm các số 1

2 - Cạnh hình chữ nhật song song với cạnh bảng

3 - Diện tích hình chữ nhật là lớn nhất có thể

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi hai số nguyên N và M (1 ≤ M, N ≤ 500).

N dòng tiếp theo, mỗi dòng gồm M số nguyên 0 hoặc 1.

Output: 

Với mỗi test, in ra diện tích hình chữ nhật lớn nhất tìm được.
Input:
1
11 13
0 0 0 0 0 1 0 0 0 0 0 0 0
0 0 0 0 1 1 1 0 0 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 1 1 1 1 1 1 1 1 1 0 0 0
1 1 1 1 1 1 1 1 1 1 1 0 0
0 1 1 1 1 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 0 0 1 1 1 0 0 0 0 1 1
0 0 0 0 0 1 0 0 0 0 0 1 1
Output:
49
*/
#include<bits/stdc++.h>

using namespace std;

long long solve(int a[], int m) {
    int r[m+1], l[m+1];
    stack<int> st;
    for(int i = 0; i < m;i++) {
        while(!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if(st.empty()) {
            l[i] = -1;
        }
        else {
            l[i] = st.top();
        }
        st.push(i);
    }
    for(int i = m-1; i >= 0;i--) {
        while(!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if(st.empty()) {
            r[i] = m;
        }
        else {
            r[i] = st.top();
        }
        st.push(i);
    }
    long long ans = 0;
    for(int i = 0; i < m;i++) {
        ans = max(ans, (long long)a[i] * (r[i] - l[i] - 1));
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n+3][m+4];
        for(int i = 0; i < n ; i++) {
            for(int j = 0; j < m ; j ++) {
                cin >> a[i][j];
            }
        }
        int f[n+4][m+4];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0) {
                    f[i][j] = a[i][j];
                }
                else {
                    if(a[i][j] == 0) {
                        f[i][j] = 0;
                    }
                    else {
                        f[i][j] = f[i-1][j] + a[i][j];
                    }
                }
            }
        }
        long long res = 0;
        for(int i = 0; i < n; i++) {
            res = max(res , solve(f[i], m));
        }
        cout << res << endl;
    }
    return 0;
}
