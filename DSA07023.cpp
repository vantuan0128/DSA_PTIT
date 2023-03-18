/*
Cho xâu ký tự S. Nhiệm vụ của bạn là đảo ngược các từ trong S. 
Ví dụ S =  “I like this program very much”, ta nhận được kết quả là “much very program this like I”.
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >>t;
    getchar();
    while(t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        stack<string> st;
        while(ss >> tmp) {
            st.push(tmp);
        }
        while(!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
