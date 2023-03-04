/*
Cho dãy số A[] gồm có N phần tử và số nguyên K.
Với mỗi dãy con liên tiếp có độ dài bằng K (từ trái sang phải), bạn hãy in ra phần tử lớn nhất trong dãy con này.
Input:
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13
Output:
3 3 4 5 5 5 6
10 10 10 15 15 90 90
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i <= n- k; i++) {
            cout << *max_element(a + i, a + i + k) << " ";
        }
        cout << endl;
    }
    return 0;
}
