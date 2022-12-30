#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		long k; cin>>k;
		ll a[n];
		for(ll &x : a) cin>>x;
		sort(a,a+n);
		ll ans=0;
		for(int i=0;i<n;i++){
			auto it1=lower_bound(a+i+1,a+n,k-a[i]);
			auto it2=upper_bound(a+i+1,a+n,k-a[i]);
			ans+=it2-it1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
