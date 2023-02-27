/*
Cho mảng A[] gồm n phần tử. Hãy tìm dãy con liên tục của mảng A[R], .., A[L] sao cho khi sắp xếp lại dãy con ta nhận được một mảng được sắp xếp. 
Ví dụ với A[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60} ta chỉ cần sắp xếp lại dãy con từ A[4],.., A[9]: {30, 25, 40, 32, 31, 35} để có mảng được sắp.
Input:
2
11
10 12 20 30 25 40 32 31 35 50 60
9
0 1 15 25 6 7 30 40 50
Output:
4 9
3 6
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1], b[n+1];
        for(int i = 0; i < n ; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int l = 0, r = n-1;
        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                l = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if(a[i] != b[i]) {
                r = i;
                break;
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}
