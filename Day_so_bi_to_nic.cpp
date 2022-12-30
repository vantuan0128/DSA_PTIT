#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1];
		for(int i=1; i<=n; i++) cin>>a[i];
		int left[n+1]={0}, right[n+1]={0};
		for(int i=1; i<=n; i++){
			left[i]=a[i];
			for(int j=1; j<i; j++){
				if(a[j]<a[i]) left[i]=max(left[i],left[j]+a[i]);
			}
		}
		for(int i=n; i>=1; i--){
			right[i]=a[i];
			for(int j=n; j>i; j--){
				if(a[j]<a[i]) right[i]=max(right[i],right[j]+a[i]);
			}
		}
		int ans=0;
		for(int i=1; i<=n; i++) ans=max(ans,left[i]+right[i]-a[i]);
		cout<<ans<<endl;
	}
	return 0;
}
