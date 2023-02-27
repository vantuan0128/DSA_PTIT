/*
Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là tìm tích giữa phần tử lớn nhất của mảng A[] và phần tử nhỏ nhất của mảng B[]. 
Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là -9 = 9*(-1).
Input:
2
6 6
5 7 9 3 6 2
1 2 6 -1 0 9
6 6

1 4 2 3 10 2
4 2 6 5 2 9
Output:
-9
20
*/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        ll a[n+1], b[m+1];
        for(int i = 0; i < n ; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < m ; i++) {
            cin >> b[i];
        }
        sort(a, a + n, greater<int>());
        sort(b, b+ m);
        cout << a[0] * b[0] << endl;
    }
    return 0;
}
