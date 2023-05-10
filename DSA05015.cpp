/*
P(n, k) là số phép biểu diễn các tập con có thứ tự gồm k phần tử của tập gồm n phần tử. Số P(n, k) được định nghĩa theo công thức sau:
P(n,k) = 0 nếu k > n
P(n,k) = n! / (n-k)! = n.(n-1)....(n-k+1)  nếu k < n
Input:
Cho số hai số n, k. Hãy tìm P(n,k) theo modulo 10^9+7.
Input:
2
5 2
4 2
Output:
20
12
*/
#include<bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        long long tich = 1;
        for(int i = n - k + 1; i <= n; i++) {
            tich *= i;
            tich %= MOD;
        }
        cout << tich << endl;
    }
    return 0;
}
