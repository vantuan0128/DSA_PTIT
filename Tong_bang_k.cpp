#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

int main(){
	int t; cin>>t;
	while(t--){
		int n,X; cin>>n>>X;
		int c[100000];
		int res[100001] = {0};
		res[0] = 1;
		for(int i=0; i<n; i++) cin>>c[i];
		for(int i=1; i<=X; i++){
			for(int coin : c){
				if(i >= coin){
					res[i] = res[i] + res[i-coin];
					res[i] %= MOD;
				}
			}
		}
		cout<<res[X]<<endl;
	}
	return 0;
}
