#include <bits/stdc++.h>
using namespace std;
int chuyen(char c){
	return c-'0';
}
long long tinh(string s){
	int n=s.length(),i;
	long long F[15],kq=0;
	F[0]=chuyen(s[0]);
	kq=F[0];
	for(int i=1;i<n;i++){
		int t=chuyen(s[i]);
		F[i]=F[i-1]*10+t*(i+1);
		kq=kq+F[i];
	}
	return kq;
}
main(){
	int t; string s;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}
}
