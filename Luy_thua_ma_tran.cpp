#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long n,k;
struct matran{
	long long pos[15][15];
};
matran nhan(matran a, matran b){
	matran temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp.pos[i][j]=0;
			for(int k=0;k<n;k++){
				temp.pos[i][j]=(temp.pos[i][j]+a.pos[i][k]*b.pos[k][j]%M)%M;
			}
		}
	}
	return temp;
}
matran power(matran a, long long k){
	if(k==1) return a;
	if(k%2==0) return power(nhan(a,a),k/2);
	else return nhan(a,power(nhan(a,a),k/2));
}
void xuly(){
	cin>>n>>k;
	matran a;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a.pos[i][j];
		}
	}
	matran b=power(a,k);
	long long res=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j==n-1) res=(res+b.pos[i][j])%M;
		}
	}
	cout<<res<<endl;
}
main(){
	int t; cin>>t;
	while(t--){
		xuly();
	}
	return 0;
}
