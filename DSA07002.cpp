/*
Yêu cầu bạn xây dựng một stack với các truy vấn sau đây:
“PUSH x”: Thêm phần tử x vào stack (0 ≤ x ≤ 1000).
“PRINT”: In ra phần tử đầu tiên của stack. Nếu stack rỗng, in ra “NONE”.
“POP”: Xóa phần tử đầu tiên của stack. Nếu stack rỗng, không làm gì cả.
Input:
9
PUSH 1
PUSH 2
POP
PRINT
PUSH 3
PRINT
POP
POP
PRINT
Output:
1
3
NONE
*/
#include <bits/stdc++.h>
using namespace std;
stack <int> s;
int main(){
	int t; cin>>t;
	while(t--) {
		string cur;
		cin>>cur;
		if(cur=="PUSH"){
			int x; cin>>x;
			s.push(x);
		}
		else if(cur=="POP"){
				if(s.size()!=0) s.pop();
			}
		else if(s.size()!=0){
			cout<<s.top()<<endl;
			}
		else cout<<"NONE"<<endl; 
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    stack<int> st;
    int n;
    int t;
    cin >> t;
    getchar();
    while(t--) {
        cin >> s;
        if(s == "PUSH") {
            cin >> n;
            st.push(n);
        }
        else if(s == "POP") {
            if(!st.empty()) {
                st.pop();
            }
        }
        else if(s == "PRINT") {
            if(st.empty()) {
                cout << "NONE" <<endl;
            }
            else {
                cout << st.top();
                cout << endl;
            }
        }
    }
    return 0;
}
