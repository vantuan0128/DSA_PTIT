/*
Hãy thực hiện thuật toán sắp xếp nổi bọt trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.
Input:
4
5 3 2 7
Output:
Buoc 1: 3 2 5 7
Buoc 2: 2 3 5 7
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+4];
    for(int i = 0; i <n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        int ok = 0;
        for(int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                ok = 1;
            }
        }
        if(ok == 1) {
            cout << "Buoc " << i + 1 <<": ";
            for(int k = 0; k < n; k ++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
