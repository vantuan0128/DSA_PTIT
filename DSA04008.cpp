/*
Dãy số Fibonacci được xác định bằng công thức như sau:
F[0] = 0, F[1] = 1;
F[n] = F[n-1] + F[n-2] với mọi n >= 2.
Các phần tử đầu tiên của dãy số là 0, 1, 1, 2, 3, 5, 8, ...
Nhiệm vụ của bạn là hãy xác định số Fibonaci thứ n. Do đáp số có thể rất lớn, in ra kết quả theo modulo 10^9+7.
Input:
3
2
6
20
Output:
1
8
6765
*/
#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
struct Matran{
	long long f[2][2]; 
};
Matran operator* (Matran A, Matran B){
	Matran C; int i,j,k;
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			C.f[i][j]=0;
			for(k=0;k<=1;k++){
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
main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		Matran X; X.f[0][0]=0; X.f[0][1]=1; X.f[1][0]=1; X.f[1][1]=1;
		Matran KQ=powM(X,n-1);
		cout<<KQ.f[1][1]<<endl;
	}
}
