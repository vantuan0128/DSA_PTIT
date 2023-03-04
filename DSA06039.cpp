/*
Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là hãy tìm số xuất hiện nhiều hơn 1 lần trong dãy số và số thứ tự là nhỏ nhất.
Input:
2
7
10 5 3 4 3 5 6
4
1 2 3 4
Output:
5
NO
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+5];
        map<int,int> m;
        for(int i = 0 ; i <n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        int ok = 0;
        for(int i = 0; i < n; i++) {
            if(m[a[i]] > 1) {
                ok = 1;
                cout << a[i] << endl;
                break;
            }
        }
        if(ok == 0) {
            cout << "NO" <<endl;
        }
    }
    return 0;
}
