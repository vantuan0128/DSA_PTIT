#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long k; cin>>k;
		long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int ok=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(binary_search(a+j+1,a+n,k-a[i]-a[j])){
					ok=1; break;
				}
			}
			if(ok==1) break;
		}
		if(ok==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
