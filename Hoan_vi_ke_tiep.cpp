#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[100000];
	    for(int i=1;i<=n;i++){
	    	cin>>a[i];
		}
		int i=n-1;
		while(a[i]>a[i+1]&&i>=1){
			i--;
		}
		if(i==0){
			for(int i=n;i>=1;i--){
				cout<<a[i]<<" ";
			}
			cout<<endl;
			continue; 
		}
		int k=n;
		while(a[k]<a[i]) k--;
		swap(a[k],a[i]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
