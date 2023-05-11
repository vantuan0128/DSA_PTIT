/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng trung tố về dạng hậu tố.
Các phép toán bao gồm +, -, *, /, ^. Phép lũy thừa có ưu tiên cao hơn nhân chia và cộng trừ.
Input:
2
(A+(B+C)
((A*B)+C)
Output:
ABC++
AB*C+
*/
#include<bits/stdc++.h>

using namespace std;

int prio(char a) {
    if(a == '^') return 4;
    if(a == '*' || a == '/') return 3;
    if(a == '+' || a == '-') return 2;
    return 1;
}

string solve(string s) {
    string ans = "";
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            while(!st.empty() && prio(st.top()) >= prio(s[i])) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while(st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else ans += s[i];
    }
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        getline(cin, s);
        cout << solve(s) << endl;
    }
    return 0;
}
