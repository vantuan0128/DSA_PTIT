#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t; cin>>t;
	int n,k; 
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int nho=min(k,n-k);
		ll tong1=0,tong2=0;
		for(int i=0;i<nho;i++){
			tong1+=a[i];
		}
		for(int i=nho;i<n;i++){
			tong2+=a[i];
		}
		cout<<tong2-tong1<<endl;
	}
	return 0;
}
