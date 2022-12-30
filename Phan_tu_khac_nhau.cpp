#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int binary_search(ll a[],ll b[],int n){
	int t=n;
	int l=0,r=n-1;
	while(l<=r){
		int	m=(l+r)/2;
		if(a[m]==b[m]) l=m+1;
		else{
			t=m;
			r=m-1;
		}
	}
	return t+1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		ll a[n],b[n-1];
		for(ll &x : a) cin>>x;
		for(int i=0;i<n-1;i++) cin>>b[i];
		int i=0,j=0;
		cout<<binary_search(a,b,n)<<endl;
	}
	return 0;
}
