/*
Cho một xâu chỉ gồm các kí tự ‘(‘, ‘)’, ‘[‘, ‘]’, ‘{‘, ‘}’. Một dãy ngoặc đúng được định nghĩa như sau:
-     Xâu rỗng là 1 dãy ngoặc đúng.
-     Nếu A là 1 dãy ngoặc đúng thì (A), [A], {A} là 1 dãy ngoặc đúng.
-     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.
Input:
2
[()]{}{[()()]()}
[(])
Output:
YES
NO
*/

#include <bits/stdc++.h>
 using namespace std;
 using ll=long long;
 
 int main(){
 	int t; cin>>t;
 	while(t--){
 		string s; cin>>s;
 		stack<char> st;
 		bool ok=true;
 		for(int i=0;i<s.size();i++){
 			if(s[i]=='('||s[i]=='['||s[i]=='{'){
 				st.push(s[i]);
			}
			else if(s[i]==')'){
				if(st.empty()==1){
					ok=false; break;
				}
				else if(st.top()=='(') st.pop();
			}
			else if(s[i]==']'){
				if(st.empty()==1){
					ok=false; break;
				}
				else if(st.top()=='[') st.pop();
			}
			else if(s[i]=='}'){
				if(st.empty()==1){
					ok=false; break;
				}
				else if(st.top()=='{') st.pop();
			}
		}
		if(st.size()>0) ok=false;
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
 	return 0;
 }

//Cach 2
#include<bits/stdc++.h>

using namespace std;

bool check1(char x) {
    if(x == '(' || x =='[' || x =='{') return true;
    return false; 
}

bool check2(char x, char y) {
    if((x == '(' && y == ')') || (x == '[' && y == ']') || (x == '{' && y == '}')) return true;
    return false;
}

bool check(string s) {
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(check1(s[i])) {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {
                return false;
            }
            else{
                if(check2(st.top(), s[i])) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
    }
    if(!st.empty()) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        cin >> s;
        if(check(s)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}       
