#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	return a>b;
}
main(){
	int t,i,l,r,n; cin>>t;
	while(t--){
		cin>>n; int a[n];
		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,cmp);
		int kq=0;
		l=0; r=n/2;
		while(l < n/2 && r < n){
			if(a[l] >= 2*a[r]){
				kq++; l++; r++;
			}
			else{
				r++;
			}
		}
		cout<<n-kq<<endl;
	}
}
