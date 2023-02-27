/*
Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao gồm các chữ số của mỗi phần tử trong A[]. 
Ví dụ A[] = {110, 111, 112, 113, 114 }ta có kết quả là {0, 1, 2, 3, 4}.
Input:
2
3
131 11 48
4
111 222 333 446
Output:
1 3 4 8
1 2 3 4 6
*/

#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        getchar();
        set<char> se;
        for(int i = 0 ; i< n; i++) {
            string s;
            cin >> s;
            for(int i = 0; i< s.length(); i++) {
                se.insert(s[i]);
            }
        }
        for(char x : se) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
