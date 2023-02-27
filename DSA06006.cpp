/*
Cho mảng A[] gồm n phần tử. Các phần tử của mảng A[] chỉ bao gồm các số 0, 1, 2. 
Hãy sắp xếp mảng A[] theo thứ tự tăng dần. Ví dụ với A[] = {0, 2, 1, 2, 0} ta kết quả A[] = {0, 0, 1, 2, 2}.
Input:
2
5
0 2 1 2 0

3
0 1 0
Output:
0 0 1 2 2

0 0 1
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
        for(int i = 0; i < n ; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 0 ; i< n;i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
