#include <bits/stdc++.h>
using namespace std;
void ql(int n, char a, char b, char c){
	if(n==1){
		cout<<a<<"-"<<c<<endl;
		return;
	}
	else{
		ql(n-1,a,c,b);
		ql(1,a,b,c);
		ql(n-1,b,a,c);
	}
}
main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	char a='1', b='2', c='3';
	int n; cin>>n;
	ql(n,a,b,c);
}

