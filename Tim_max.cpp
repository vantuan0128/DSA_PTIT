#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,greater<int>());
		long long sum_max=0;
		for(int i=0;i<n;i++){
			sum_max=(sum_max+a[i]*(n-i-1))%M;
		}
		cout<<sum_max<<endl;
	}
	return 0;
}
