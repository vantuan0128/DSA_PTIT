#include <bits/stdc++.h>
using namespace std;
int n;
const int MOD=1e9+7;
struct Matran{
	long long f[10][10];
};
Matran operator * (Matran A, Matran B){
	Matran C;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			C.f[i][j]=0;
			for(int k=0;k<n;k++){
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%MOD)%MOD;
			}
		}
	}
	return C;
}
Matran powM(Matran X, long k){
	if(k==1) return X;
	Matran A=powM(X,k/2);
	if(k%2==0) return A*A;
	else return A*A*X;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Matran X;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>X.f[i][j];
			}
		}
		Matran KQ=powM(X,k);
		long long tong=0;
		for(int i=0;i<n;i++){
			tong+=KQ.f[i][n-1];
			tong%=MOD;
		}
		cout<<tong<<endl;
	}
	return 0;
}
