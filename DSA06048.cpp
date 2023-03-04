/*
Ban đầu dãy số A[] gồm N phần tử đã được sắp xếp tăng dần. Các phần tử của dãy A[] có thể giống nhau. 
Sau đó ta thực hiện quay vòng phải, mỗi lần lấy một ký tự ở cuối dãy đưa lên đầu dãy.
Cho trạng thái dãy số của A[] sau khi đã thực hiện quay vòng K lần. Hãy tìm K.
Input:
2
5
5 1 2 3 4
5
1 2 3 4 5
Output:
1
0
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
        int pos;
        for(int i = 0; i< n;i++) {
            cin >> a[i];
            if(a[i] == 1) {
                pos = i;
            }
        }
        cout << pos << endl;
    }
    return 0;
}
