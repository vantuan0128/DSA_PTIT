/*
Cho mảng số N. Ta gọi số đảo của N là R. Hãy tìm lũy thừa R của N. Đưa ra kết quả của bài toán dưới dạng modulo với 10^9 + 7.
Input: 2
	2
	12
Output:
4
864354781
*/

#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long xuly(long long n, long long k){
	if(k==0) return 1;
	if(k==1) return n%M;
	long long x=xuly(n,k/2);
	if(k%2==0) return (x*x)%M;
	else return (n*(x*x%M))%M;
}

long long sodao(long long n){
	long long m=n;
	long long N,somoi=0; 
	while(m>0){
		N=m%10;
		somoi=somoi*10+N;
		m/=10;
	}
	return somoi;
}
int main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<xuly(n,sodao(n))<<endl;
	}
}
