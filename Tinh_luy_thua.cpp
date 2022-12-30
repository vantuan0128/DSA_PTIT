#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long powM(long a, long long b){
	if(b==0) return 1;
	if(b==1) return a%M;
	long long x = powM(a,b/2);
	if(b%2==0) return (x*x)%M;
		else return (a*(x*x%M))%M;
}
main(){
	long a=1;
	long long b=1;
	while(1){
		cin>>a>>b;
		if(a==0&&b==0) break; 
		cout<<powM(a,b)<<endl;
	}
}
