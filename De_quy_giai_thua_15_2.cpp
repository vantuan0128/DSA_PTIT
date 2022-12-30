#include <bits/stdc++.h>
using namespace std;
//De quy tuyen tinh
long long giaithua1(int n){ //O(n)
	if(n==0) return 1;
	return n * giaithua1(n-1);
}
// do phuc tap giaithua 1 va 2 la nhu nhau
long long giaithua2(int n){ //O(n)
	int t = 1;
	for(int i=1; i<=n; i++) t = t * i;
	return t;
}
main(){
	int n; cin>>n;
	cout<<giaithua1(n)<<endl;
}
