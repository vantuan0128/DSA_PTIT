/*
Hãy thực hiện thuật toán sắp xếp đổi chỗ trực tiếp trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.
Input:
4
5 7 3 2
Output:
Buoc 1: 2 7 5 3
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
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
    for(int i = 0; i < n-1; i++) {
        cout << "Buoc " << i+1 <<": ";
        for(int j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
        for(int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}

