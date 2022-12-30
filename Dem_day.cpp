#include <bits/stdc++.h>
using namespace std;

using ll=long long;

ll powMod(ll a, ll b, ll c){
	ll res=1;
	while(b){
		if(b %2 ==1){
			res *= a; res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<powMod(2,n-1,123456789)<<endl;
	}
	return 0;
}
