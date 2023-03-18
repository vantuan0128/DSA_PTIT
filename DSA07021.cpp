/*
Cho một xâu chỉ gồm các kí tự ‘(‘ và ‘)’. Một dãy ngoặc đúng được định nghĩa như sau:

-     Xâu rỗng là 1 dãy ngoặc đúng.

-     Nếu A là 1 dãy ngoặc đúng thì (A) là 1 dãy ngoặc đúng.

-     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.

Cho một xâu S. Nhiệm vụ của bạn là hãy tìm dãy ngoặc đúng dài nhất xuất hiện trong xâu đã cho.

Input:
3
((()
)()())
()(()))))
Output:
2
4
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
        getline(cin,s);
        stack<char> st;
        vector<int> v;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                st.push(s[i]);
                v.push_back(i);
            }
            else {
                if(st.empty()) {
                    v.push_back(i);
                }
                else {
                    st.pop();
                    v.pop_back();
                }
            }
        }
        v.push_back(s.length());
        sort(v.begin(), v.end());
        int res = INT_MIN;
        for(int i =1; i < v.size(); i++) {
            res = max(res, v[i] - v[i-1] - 1);
        }
        cout << max(res, v[0]);
        cout <<endl;
    }
    return 0;
}
