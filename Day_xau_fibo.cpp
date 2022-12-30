#include <bits/stdc++.h>
using namespace std;
long long F[100];
char FiboWord(int n, long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k <= F[n-2]) return FiboWord(n-2,k);
	return FiboWord(n-1,k-F[n-2]);
}
main(){
	F[0]=0;F[1]=1;
	for(int i=2;i<=92;i++) F[i]=F[i-1]+F[i-2];
	int t,n; long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<FiboWord(n,k)<<endl;
	}
}
