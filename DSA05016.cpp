/*
Số Ugly là các số chỉ có ước số là 2, 3, 5. Theo qui ước số 1 cũng là 1 số Ugly. 
Dưới đây là 11 số Ugly đầu tiên: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15. Cho số tự nhiên N, nhiệm vụ của bạn là tìm số Ugly thứ N.
Input:
2
10
4
Output:
12
4
*/

#include<bits/stdc++.h>

using namespace std;

long long a[10001];

void khoitao() {
    int i2 = 1, i3 = 1, i5 = 1;
    a[1] = 1;
    for(int i = 2; i <= 1e4; i++) {
        a[i] = min(min(a[i2] * 2, a[i3] * 3), a[i5] * 5);
        if(a[i] == a[i2] * 2) ++i2;
        if(a[i] == a[i3] * 3) ++i3;
        if(a[i] == a[i5] * 5) ++i5;
    }
}

int main() {
    khoitao();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}
