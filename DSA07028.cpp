/*
Bạn là một nhà đầu tư chứng khoán nổi tiếng. Nhiệm vụ hàng ngày của bạn là tính nhịp tăng giảm của phiên chứng khoán trong N ngày để có thể bắt kịp thị trường. 
Nhịp chứng khoán của ngày thứ i được định nghĩa là số ngày liên tiếp từ ngày thứ i trở về mà giá chứng khoán bé hơn hoặc bằng với giá chứng khoán của ngày i.

Input: Dòng đầu ghi số bộ test (không quá 10). Mỗi test có 2 dòng.

Dòng đầu tiên gồm 1 số nguyên N (1 ≤ N ≤ 105) là số ngày.
Dòng tiếp theo gồm N số nguyên A1, A2, …, AN (1 ≤ Ai ≤ 106) là giá chứng khoán của các ngày.
In ra N số B1, B2, …, BN trong đó Bi là nhịp chứng khoán của ngày thứ i.

Input:
1
7
100 80 60 70 60 75 85
Output:
1 1 1 2 1 4 6
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
            while(!st.empty() && a[st.top()] <= a[i]) {
                st.pop();
            }
            if(st.empty()) {
                cout << i << " ";
            }
            else {
                cout << i - st.top() << " ";
            }
            st.push(i);
        }
        cout << endl;
    }
    return 0;
}
