/*
Cho biểu thức P chỉ bao gồm các ký tự mở ngoặc ‘(’ hoặc đóng ngoặc ‘)’. Biểu thức P có thể viết đúng hoặc không đúng.
Nhiệm vụ của bạn là tìm tổng độ dài lớn nhất của các biểu thức con viết đúng trong P (các biểu thức đúng không nhất thiết phải liên tiếp nhau).
Chú ý: Độ dài của biểu thức đúng ngắn nhất là 2.
Input:
4
(()(
()()((
((()()())))
()(())(
Output:
2
4
10
6
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        getline(cin, s);
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(st.empty()) {
                st.push(s[i]);
            }
            else {
                if(s[i] == '(') {
                    st.push(s[i]);
                }
                else {
                    if(st.top() == ')') {
                        st.push(s[i]);
                    }
                    else {
                        st.pop();
                    }
                }
            }
        }
        cout << s.length() - st.size() << endl;
    }
    return 0;
}
