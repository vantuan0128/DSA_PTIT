#include <bits/stdc++.h>
using namespace std;
void xuly(){
	string s; cin>>s;
	for(int i=0;i<s.length();i++){
		if(i==0) cout<<s[i];
		else{
			if(s[i]!=s[i-1]) cout<<1;
			else cout<<0;
		}
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--) xuly();
	return 0;
}
