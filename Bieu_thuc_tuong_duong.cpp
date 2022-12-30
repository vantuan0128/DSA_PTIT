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
