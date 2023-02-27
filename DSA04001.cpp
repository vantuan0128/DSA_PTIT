/*
Cho số nguyên dương N và K. Hãy tính N mu K modulo 10^9+7.
Input: 2
	2 3
	4 2
Output: 8 
	16
*/
#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long powM(int n, long k){
	if(k == 0) return 1;
	if(k == 1) return n % M;
	long long x = powM(n,k/2);
	if(k%2==0) return (x * x) % M;
	return (n * (x * x % M)) % M;
}
main(){
	int t; cin>>t;
	while(t--){
		int n;
		long k;
		cin>>n>>k;
		cout<<powM(n,k)<<endl;
	}
}
