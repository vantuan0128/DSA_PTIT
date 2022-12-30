#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

int main(){
	int t; cin>>t;
	while(t--){
		long n; cin>>n;
		ll a[n],b[n];
		ll sum=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(int i=0;i<n;i++){
			sum += a[i]*b[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
