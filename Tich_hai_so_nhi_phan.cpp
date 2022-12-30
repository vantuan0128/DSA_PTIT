#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll convert(string a){
	ll res=0;
	for(int i=0;i<a.length();i++){
		res=res*2+a[i]-'0';
	}
	return res;
}

void init(){
	string a,b;
	cin>>a>>b;
	cout<<convert(a)*convert(b)<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		init();
	}
	return 0;
}
