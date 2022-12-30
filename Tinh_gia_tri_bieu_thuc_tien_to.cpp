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
