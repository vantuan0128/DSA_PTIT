/*
Dãy số nguyên dương vô hạn A[] được định nghĩa một cách đệ quy như sau:
	A[0] = 0
	A[1] = 1;
	A[i] = A[i-1] + A[i-2] với mọi n ≥ 2.
Cho số nguyên dương N không quá 109. Hãy xác định số thứ N trong dãy A[]. Nếu kết quả quá lớn, hãy in ra theo modulo 10^9+7.
Input:
2
2
6
Output: 
1
8
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

struct matran{
	ll F[2][2];
	friend matran operator * (matran a, matran b){
		matran ans;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				ans.F[i][j]=0;
				for(int k=0;k<2;k++){
					ans.F[i][j] += a.F[i][k]*b.F[k][j];
					ans.F[i][j] %=MOD;
				}
			}
		}
		return ans;
	}
};

matran powMod(matran a, ll n){
	if(n==1) return a;
	matran tmp=powMod(a,n/2);
	if(n%2==1) return tmp*tmp*a;
	else return tmp*tmp;
}

int main(){
	int t; cin>>t;
	matran a;
	while(t--){
		a.F[0][0]=a.F[0][1]=a.F[1][0]=1;
		a.F[1][1]=0;
		ll n; cin>>n;
		matran ans=powMod(a,n);
		cout<<ans.F[0][1]<<endl;
	}
	return 0;
}
