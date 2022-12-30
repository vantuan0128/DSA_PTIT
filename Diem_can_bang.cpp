#include <bits/stdc++.h>
using namespace std;
int xuly(int a[], int n){
	int total_sum=0, left_sum=0, right_sum=0;
	for(int i=0;i<n;i++){
		total_sum+=a[i];
	}
	for(int i=0;i<n;i++){
		total_sum-=a[i];
		right_sum=total_sum;
		if(left_sum==right_sum) return i+1;
		else left_sum+=a[i];
	}
	return -1;
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
		cout<<xuly(a,n)<<endl;
	}
	return 0;
}
