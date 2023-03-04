#include<bits/stdc++.h>

using namespace std;

bool check(string s) {
    stack<char> st;
    for(int i = 0 ; i<s.length(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            bool ok = true;
            while(st.top() != '(') {
                if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/') {
                    ok = false;
                }
                st.pop();
            }
            if(ok) {
                return true;
            }
            st.pop();
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            st.push(s[i]);
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        getline(cin,s);
        if(check(s)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout <<endl;
    }
    return 0;
}
