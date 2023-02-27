/*
Cho 2 số nguyên n, k. Bạn hãy tính C(n, k) modulo 10^9+7.
Input:
2
5 2
10 3
Output:
10
120
*/
#include <bits/stdc++.h>
using namespace std;
int C[1001][1001];
int MOD=1e9+7;
void init(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<=i;j++){
			if(j==i||j==0) C[i][j]=1;
			else C[i][j]=(C[i-1][j-1]+C[i-1][j])%MOD;
		}
	}
}
int main(){
	int t; cin>>t;
	init();
	while(t--){
		int n,k; cin>>n>>k;
		cout<<C[n][k]<<endl;
	}
	return 0;
}
