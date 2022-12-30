#include <bits/stdc++.h>
using namespace std;
main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long a[n];
		for(long &x : a) cin>>x;
		sort(a,a+n);
		long x=0,y=0;
		for(int i=0;i<n;i++){
			if(i%2==0) x=x*10+a[i];
			else y=y*10+a[i]; 
		}
		cout<<x+y<<endl;
	}
	return 0;
}
