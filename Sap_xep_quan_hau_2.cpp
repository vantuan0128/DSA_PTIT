#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int X[100],xuoi[100],nguoc[100],cot[100],dem=0;
int A[102][102];
ll ans=0;
void check(){
	ll tong = 0;
	for(int i=1; i<=8; i++){
		tong += X[i];
	}
	ans = max(ans,tong);
}
void Try(int i){
	for(int j=1; j<=8; j++){
		if(cot[j] == 0 && xuoi[i-j+8] == 0 && nguoc[i+j-1] == 0){
			X[i]=A[i][j];
			cot[j] = xuoi[i-j+8] = nguoc[i+j-1] = 1;
			if(i == 8) check();
			else Try(i+1);
			cot[j] = xuoi[i-j+8] = nguoc[i+j-1] = 0;
		} 
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t ; cin>>t;
	while(t--){
		for(int i=1; i<=8; i++){
			for(int j=1; j<=8; j++){
				cin>>A[i][j];
			}
		}
		Try(1);
		cout<<ans<<endl;
		ans = 0;
	}
	return 0;
}
