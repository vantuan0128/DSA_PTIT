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
