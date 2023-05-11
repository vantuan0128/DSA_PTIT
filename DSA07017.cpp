/*
Cho mảng A[] gồm n phần tử. Hãy đưa ra các phần tử nhỏ hơn tiếp theo của phần tử lớn hơn đầu tiên phần tử hiện tại. 
Nếu phần tử hiện tại không có phần tử lớn hơn tiếp theo ta xem là -1. Nếu phần tử không có phần tử nhỏ hơn tiếp theo ta cũng xem là -1.
Ví dụ với mảng A[] = {5, 1, 9, 2, 5, 1, 7} ta có kết quả là ans = {2, 2, -1, 1, -1, -1, -1} vì:

Next Greater                         Right Smaller
5          ->  9                     9  ->  2
1          ->  9                     9  ->  2
9          -> -1                     -1 -> -1
2          -> 5                      5   -> 1
5          -> 7                      7  -> -1
1          ->  7                     7 -> -1
7          -> -1                     7 -> -1
Input:
2
7
5 1 9 2 5 1 7
8
4 8 2 1 9 5 6 3
Output:
2 2 1 1 -1 -1 -1
2 5 5 5 -1 3 -1 -1
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1], r[n+1];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        stack<int> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && a[st.top()] <= a[i]) {
                st.pop();
            }
            if(st.empty()) {
                r[i] = -1;
            }
            else {
                r[i] = st.top();
            }
            st.push(i);
        }
        while(!st.empty()) {
            st.pop();
        }
        int l[n+1];
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() >= a[i]) {
                st.pop();
            }
            if(st.empty()) {
                l[i] = -1;
            }
            else {
                l[i] = st.top();
            }
            st.push(a[i]);
        }
        for(int i = 0; i < n;i++) {
            if(r[i] == -1) cout << -1 << " ";
            else {
                cout << l[r[i]] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
