/*
Cho mảng A[] gồm N phần tử chưa được sắp xếp. Nhiệm vụ của bạn là sắp xếp các phần tử của mảng A[] theo thứ tự tăng dần bằng thuật toán Merge Sort.
Input:
2
5
4 1 3 9 7
10
10 9 8 7 6 5 4 3 2 1
Output:
1 3 4 7 9
1 2 3 4 5 6 7 8 9 10
*/

#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int r, int m) {
    vector<int> v1(a + l, a + m + 1);
    vector<int> v2(a + m+1, a + r + 1);
    int i = 0, j = 0;
    while(i < v1.size() && j < v2.size()) {
        if(v1[i] <= v2[j]) {
            a[l++] = v1[i];
            ++i;
        }
        else {
            a[l++] = v2[j];
            ++j;
        }
    }
    while(i < v1.size()) {
        a[l++] = v1[i];
        ++i;
    }
    while(j < v2.size()) {
        a[l++] = v2[j];
        ++j;
    }
}

void mergeSort(int a[], int l, int r) {
    if(l < r) {
        int m = (l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, r, m);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0 ; i < n; i++) {
            cin >> a[i];
        }
        mergeSort(a, 0, n-1);
        for(int i = 0; i< n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
