#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

void solve (string s){
	stack <string> st;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			string tmp="";
			tmp+=s[i];
			st.push(tmp);
		}
		else{
			string a=st.top();st.pop();
			string b=st.top(); st.pop();
			string tmp =s[i]+b+a;
			st.push(tmp);
		}
	}
	cout<<st.top()<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		solve(s);
	}
	return 0;
}
