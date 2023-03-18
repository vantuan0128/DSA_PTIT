/*
Ban đầu cho một queue rỗng. Bạn cần thực hiện các truy vấn sau:
1.Trả về kích thước của queue
2.Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
3.Cho một số nguyên và đẩy số nguyên này vào cuối queue.
4.Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
5.Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
6.Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.
Input:
1
14
3 1
3 2
3 3
5
6
4
4
4
4
4
3 5
3 6
5
1
Output:
1
3
5
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
        queue<int> q;
        for(int i = 0 ; i < n; i++) {
            int x;
            cin >> x;
            if(x == 1) {
                cout << q.size() << endl;
            }
            else if(x == 2) {
                if(q.empty()) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" <<endl;
                }
            }
            else if(x == 3) {
                int k;
                cin >> k;
                q.push(k);
            }
            else if(x == 4) {
                if(!q.empty()) {
                    q.pop();
                }
            }
            else if(x == 5) {
                if(q.empty()) {
                    cout << -1 << endl;
                }
                else {
                    cout << q.front() <<endl;
                }
            }
            else if(x == 6) {
                if(q.empty()) {
                    cout << -1 << endl;
                }
                else {
                    cout << q.back() <<endl;
                }
            }
        }
    }
    return 0;
}
