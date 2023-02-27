/*
Cho mảng A[] gồm n phần tử, hãy tìm cặp phần tử có tổng gần nhất so với 0.
Đưa ra tổng gần nhất với 0 của cặp phần tử.
Input:
2
3
-8 -66 -60

6
-21 -67 -37 -18 4 -65  
Output:
-68
-14
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
        for(int i = 0 ; i< n; i++) {
            cin >> a[i];
        }
        int tong = INT_MAX;
        for(int i = 0; i < n-1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(abs(a[i] + a[j]) < abs(tong)) {
                    tong = a[i] + a[j];
                }
            }
        }
        cout << tong << endl;
    }
    return 0;
}
