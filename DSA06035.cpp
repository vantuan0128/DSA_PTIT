/*
Cho dãy số A[] gồm có N phần tử.
Một dãy con liên tiếp được gọi là dãy tam giác nếu như dãy đó tăng dần rồi lại giảm dần, hay tồn tại i, j, k sao cho A[i] ≤ A[i+1] ≤ … ≤ A[k] >= A[k+1] >= … >= A[j].
Nhiệm vụ của bạn là hãy tìm dãy con liên tiếp là dãy tam giác có độ dài lớn nhất.
Lưu ý: Dãy đơn điệu không giảm hoặc không tăng cũng là dãy tam giác.
Ví dụ A[] = {10, 20, 30, 40} là một dãy tam giác.
Input:
2
6
12 4 78 90 45 23
8
20 4 1 2 3 4 2 10
Output:
5
5
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0 ; i< n ; i++) {
            cin >> a[i];
        }
        int b[n+5] , c[n+5];
        b[0] = 1; c[n-1] = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] > a[i-1]) {
                b[i] = b[i-1] + 1;
            }
            else {
                b[i] = 1;
            }
        }
        for(int i = n-2; i >=0; i--) {
            if(a[i] > a[i+1] ) {
                c[i] = c[i+1] + 1;
            }
            else {
                c[i] = 1;
            }
        } 
        int res = INT_MIN;
        for(int i = 0; i< n; i++) {
            res = max(res, b[i] + c[i] -1);
        }
        cout << res << endl;
    }
    return 0;
}
