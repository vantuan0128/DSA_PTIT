#include <bits/stdc++.h>
using namespace std;
int n,a[1001],L[1001],ans;
void Qhd(){
	memset(L,0,sizeof(L));
	ans=0;
	for(int i=0; i<n; i++){
		L[i]=1;
		for(int j=0; j<i; j++){
			if(a[i]>=a[j]) L[i]=max(L[i],L[j]+1);
		}
		ans=max(ans,L[i]);
	}
	cout<<n-ans<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n ;i++) cin>>a[i];
		Qhd();
		
	}
	return 0;
}
