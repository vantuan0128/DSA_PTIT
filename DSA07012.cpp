/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng hậu tố về dạng trung tố.
Input:
2
ABC++
AB*C+
Output:
(A+(B+C)
((A*B)+C)
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
        stack<string> st;
        for(int i = 0; i < s.length(); i++) {
            if(isalpha(s[i])) {
                st.push(string(1,s[i]));
            }
            else {
                string tmp1 = st.top(); st.pop();
                string tmp2 = st.top(); st.pop();
                st.push("(" + tmp2 + s[i] + tmp1 + ")");
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}

// 2
// AB+CD-*
// ABC/-AK/L-*
