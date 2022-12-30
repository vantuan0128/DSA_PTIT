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
			string tmp="("+top1+s[i]+top2+")";
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
