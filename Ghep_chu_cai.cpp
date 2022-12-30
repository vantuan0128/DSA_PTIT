#include <bits/stdc++.h>
using namespace std;
char c; int n;
bool check(string s){
	for(int i=1;i<s.length()-1;i++){
		if(s[i-1]!='E'&&s[i]=='A'&&s[i+1]!='E') return false;
		if(s[i-1]!='A'&&s[i]=='E'&&s[i+1]!='A') return false;
	}
	return true;
}
main(){
	cin >> c;
	string a;
	n = c-'A'+1;
	a.resize(n);
	for(int i=0; i<n; i++){
		a[i]='A'+i;
	}
	if(check(a)) cout<<a<<endl;
	while(next_permutation(a.begin(),a.end())){
		if(check(a)) cout<<a<<endl;
	}
}
