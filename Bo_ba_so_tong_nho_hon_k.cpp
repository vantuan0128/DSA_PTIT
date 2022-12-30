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
		ll k; cin>>k;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll dem=0;
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				auto it=lower_bound(a+j+1,a+n,k-a[i]-a[j]);	
				it--;
				dem+=0ll+(it-(a+j));
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
