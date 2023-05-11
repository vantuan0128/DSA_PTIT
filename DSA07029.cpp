/*
Cho xâu ký tự mã hóa str. Hãy viết chương trình giải mã xâu ký tự str. Xâu ký tự mã hóa được thực hiện theo số lần lặp các xâu con của str như sau:

Xâu đầu vào: “abbbababbbababbbab ”

Xâu mã hóa : "3[a3[b]1[ab]]"
Input:
2
1[b]
3[b2[ca]]
Output:
b
bcacabcacabcaca
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        stack<string> st;
        getline(cin,s);
        int cnt = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i] == ']' || isalpha(s[i])) {
                st.push(string(1, s[i]));
            }
            else if (s[i] == '[') {
                string tmp = "";
                while(st.top() != "]") {
                    tmp += st.top();
                    st.pop();
                }
                st.pop();
                st.push(tmp);
            }
            else if(isdigit(s[i])) {
                string res = "";
                int hs;
                while(isdigit(s[i])) {
                    res += s[i];
                    --i;
                }
                reverse(res.begin(), res.end());
                hs = stoll(res);
                ++i;
                string tmp = st.top();
                st.pop();
                string ans = "";
                while(hs--) {
                    ans += tmp;
                }
                st.push(ans);
            }
        }
        while(!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
