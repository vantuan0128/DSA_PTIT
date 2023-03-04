/*
Hãy thực hiện thuật toán sắp xếp chèn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.
Input:
4
5 7 3 2
Output:
Buoc 0: 5
Buoc 1: 5 7
Buoc 2: 3 5 7
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
    for(int i = 0; i < n; i++) {
        cout << "Buoc " << i <<": ";
        int j = i - 1, key = a[i];
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = key;
        for(int k = 0; k <= i; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}

