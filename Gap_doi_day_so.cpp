#include <bits/stdc++.h>
using namespace std;
int dequy(int n, long long k){
	long long x=pow(2,n-1);
	if(k==x) return n;
	if(k<x) return dequy(n-1,k);
	return dequy(n-1,k-x);
}
main(){
	int t,n; long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<dequy(n,k)<<endl;
	}
}
