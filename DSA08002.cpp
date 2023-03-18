/*
Yêu cầu bạn xây dựng một queue với các truy vấn sau đây:
“PUSH x”: Thêm phần tử x vào cuối của queue (0 ≤ x ≤ 1000).
“PRINTFRONT”: In ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.
“POP”: Xóa phần tử ở đầu của queue. Nếu queue rỗng, không làm gì cả.
Input:
9
PUSH 1
PUSH 2
POP
PRINTFRONT
PUSH 3
PRINTFRONT
POP
POP
PRINTFRONT
Output:
2
2
NONE
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    queue<int> q;
    while(t--) {
        string s;
        cin >> s;
        if(s == "PUSH") {
            int n;
            cin >> n;
            q.push(n);
        }
        else if(s == "POP") {
            if(!q.empty()) {
                q.pop();
            }
        }
        else if(s == "PRINTFRONT") {
            if(q.empty()) {
                cout << "NONE" << endl;
            }
            else {
                cout << q.front() << endl;
            }
        }
    }
    return 0;
}
