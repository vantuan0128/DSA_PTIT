/*
Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = A^K với K là số nguyên cho trước. 
Sau đó, tính tổng các phần tử của cột cuối cùng. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 10^9+7.
Input:
2
2 5
1 1
1 0

3 1000000000
1 2 3
4 5 6
7 8 9
Output:
8
581039956
Giải thích:

A^5 = 8 5

      5 3

Tổng các phần tử trên cột cuối cùng bằng 5+3 = 8.

               597240088 35500972 473761863

B^1000000000 = 781257150 154135232 527013321

               965274212 272769492 580264779

Tổng các phần tử trên cột cuối cùng là:

(473761863+527013321+580264779) % 1000000007 = 581039956
*/
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
				C.f[i][j] = ( C.f[i][j] + ( A.f[i][k] * B.f[k][j] ) % MOD ) % MOD;
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
		Matran KQ = powM(X,k);
		long long tong=0;
		for(int i=0;i<n;i++){
			tong += KQ.f[i][n-1];
			tong %= MOD;
		}
		cout<<tong<<endl;
	}
	return 0;
}
