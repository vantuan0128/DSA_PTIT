#include <bits/stdc++.h>
using namespace std;
char quaylui(string s, long long n){
	long long len = s.length();
	if(n<len) return s[n];
	while(2*len <= n) len*=2;
	if(len==n) return quaylui(s,n-1);
	return quaylui(s,n-len-1);
}
main(){
	int t; string s; long long n;
	cin>>t;
	while(t--){
		cin>>s>>n;
		cout<<quaylui(s,n-1)<<endl;
	}
}
