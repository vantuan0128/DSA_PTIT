/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng tiền tố về dạng hậu tố.
Input:
2
*+AB-CD
*-A/BC-/AKL
Output:
AB+CD-*
ABC/-AK/L-*
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

string solve(string s){
	stack <string> st;
	for(int i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			string tmp=""; tmp+=s[i];
			st.push(tmp);
		}
		else{
			string top1=st.top(); st.pop();
			string top2=st.top(); st.pop();
			string tmp=top1+top2+s[i];
			st.push(tmp);
		}
	}
	return st.top();
}

int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

bool check1(char a) {
    if(a == '+' || a == '-' || a == '*' || a== '/') {
        return true;
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
        stack<string> st;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(!check1(s[i])) {
                st.push(string(1,s[i]));
            }
            else {
                string tmp1 = st.top(); st.pop();
                string tmp2 = st.top(); st.pop();
                string tmp = tmp1 + tmp2 +string(1,s[i]);
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
        cout <<endl;
    }
    return 0;
}
