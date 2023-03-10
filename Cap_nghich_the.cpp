#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

ll merge(int a[], int l ,int r, int m){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	ll cnt=0;
	int i=0,j=0;
	while(i<x.size() && j<y.size()){
		if(x[i]>y[j]){
			cnt += x.size()-i;
			a[l++]=y[j++];
		}
		else{
			a[l++]=x[i++];
		}
	}
	while(i<x.size()) a[l++]=x[i++];
	while(j<y.size()) a[l++]=y[j++];
	return cnt;
}

ll mergesort(int a[], int l, int r){
	ll ans=0;
	if(l<r){
		int m=(l+r)/2;
		ans += mergesort(a,l,m);
		ans += mergesort(a,m+1,r);
		ans += merge(a,l,r,m);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<mergesort(a,0,n-1)<<endl;
	}	
	return 0;
}
