/*
Hãy viết chương trình tính toán giá trị của biểu thức tiền tố.
Input:
2
-+8/632
-+7*45+20
Output:
8
25
*/
#include <bits/stdc++.h>
using namespace std;

void solve(string s){
	stack<int>st;
	for(int i=s.size()-1;i>=0;i--){
		if(isdigit(s[i])){
			st.push(s[i]-'0');
		}
		else{
			int s1=st.top();st.pop();
			int s2=st.top();st.pop();
			int tmp;
			if(s[i]=='+') tmp=s1+s2;
			else if(s[i]=='-') tmp=s1-s2;
			else if(s[i]=='*') tmp=s1*s2;
			else tmp=s1/s2;
			st.push(tmp);
		}
	}
	cout<<st.top()<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		solve(s);
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

int tinh(int a, int b, char x) {
    if(x == '+') {
        return a + b;
    }
    else if(x == '-') {
        return a - b;
    }
    else if(x == '*') {
        return a * b;
    }
    else if(x == '/') {
        return a / b;
    }
}

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        getline(cin,s);
        stack<int> st;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(!check1(s[i])) {
                st.push(stoi(string(1,s[i])));
            }
            else {
                int tmp1 = st.top(); st.pop();
                int tmp2 = st.top(); st.pop();
                int tmp = tinh(tmp1, tmp2, s[i]);
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
        cout <<endl;
    }
    return 0;
}
