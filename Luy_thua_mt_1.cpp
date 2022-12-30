#include <bits/stdc++.h>
using namespace std;
int M=1e9+7,n;
struct Matran{
	long long f[10][10]; 
};
Matran operator* (Matran A, Matran B){
	Matran C; int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			C.f[i][j]=0;
			for(k=0;k<n;k++){
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%M)%M;
			}
		}
	}
	return C;
}
Matran powM(Matran X, int n){
	if(n==1) return X;
	Matran A =powM(X,n/2);
	if(n%2==0) return A*A;
	return A*A*X;
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
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<KQ.f[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
