/*
Cho biểu thức đúng P chỉ bao gồm các phép toán +, -, các toán hạng cùng với các ký tự ‘(’, ‘)’. Hãy bỏ tất cả các ký tự ‘(’, ‘)’ trong P để nhận 
được biểu thức tương đương.
Ví dụ với P = a – (b + c) ta có kết quả P = a – b – c .
Input:
2
a–(b+c)
a-(b-c-(d+e))-f
Output:
a-b-c
a-b+c+d+e-f
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		stack <char> st;
		string s; cin>>s;
		int n = s.length(),i;
		for(i = 0; i < n; i++){
			if(s[i] == '('){
				char c = s[i-1];
				if(c == '-' || c == '+') st.push(c);
			}
			if(!st.empty() && st.top() == '-'){
				if(s[i] == '-') s[i] = '+';
				else if(s[i] == '+') s[i] = '-';
			} 
			if(s[i] == ')' && !st.empty()) st.pop();
		}
		for(int i = 0; i < n; i++){
			if(s[i] == '(' || s[i] == ')') continue;
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
