#include <bits/stdc++.h>
using namespace std;
int xuly(int a[],int l,int r,int k){
	if(l>r) return 0;
	int m=(l+r)/2;
	if(a[m]==k) return m+1;
	else if(a[m]<k){
		return xuly(a,m+1,r,k);
	}
	else return xuly(a,l,m-1,k);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int l=0, r=n-1;
		if(xuly(a,l,r,k)==0) cout<<"NO"<<endl;
		else cout<<xuly(a,l,r,k)<<endl;
	}
	return 0;
}
