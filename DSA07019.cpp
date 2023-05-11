/*
Cho N cột, mỗi cột có chiều cao bằng H[i]. Bạn hãy tìm hình chữ nhật lớn nhất bị che phủ bởi các cột?
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (N ≤ 100 000).
Dòng tiếp theo gồm N số nguyên H[i] (1 ≤ H[i] ≤ 10^9).
Với mỗi test, in ra diện tích hình chữ nhật lớn nhất tìm được.
Input:
2
7
6 2 5 4 5 1 6
3
2 2 2
Output:
12
6
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+5], r[n+5], l[n+5];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        stack<int> st;
        for(int i = 1; i <= n; i++) {
            while(!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }
            if(st.empty()) {
                l[i] = 0;
            }
            else {
                l[i] = st.top();
            }
            st.push(i);
        }
        while(!st.empty()) {
            st.pop();
        }
        for(int i = n; i >= 1; i--) {
            while(!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }
            if(st.empty()) {
                r[i] = n+1;
            }
            else {
                r[i] = st.top();
            }
            st.push(i);
        }
        long long ans = 0;
        for(int i = 1; i <= n; i++) {
            ans = max(ans, (long long)a[i] * (r[i] - l[i] - 1));
        }
        cout << ans << endl;
    }
    return 0;
}
