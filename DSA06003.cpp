/*
Cho mảng A[] gồm n phần tử. Hãy tìm số phép đổi chỗ ít nhất giữa các phần tử của mảng để mảng A[] được sắp xếp. 
Ví dụ với A[] = {4, 3, 2, 1} ta cần thực hiện ít nhất 2 phép đổi chỗ: Swap(A[0], A[3]),  Swap(A[1], A[2]).
Input:
2
4
4 3 2 1
5
1 5 4 3 2
Output:
2
2
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
        for(int i = 0; i < n ; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 0; i <n-1; i++) {
            int min = i;
            for(int j = i+1; j < n ; j++) {
                if(a[j] < a[min]) {
                    min = j;
                }
            }
            if(i != min) {
                ++cnt;
            }
            swap(a[min], a[i]);
        }
        cout << cnt <<endl;
    }
    return 0;
}
