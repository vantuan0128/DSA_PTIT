#include <bits/stdc++.h>
using namespace std;
long tes(long a, long b){
	long c=a*a+b*b;
	long k=sqrt(c);
	if(k*k==c) return k;
	return 0;
}
void nhap(long a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int ok=0;
		long a[n];
		nhap(a,n);
		sort(a,a+n);
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				long long k=tes(a[i],a[j]);
				if(k!=0&&binary_search(a+j+1,a+n,k)){
					ok=1;
					break;
				}
			}
			if(ok==1) break;
		}
		if(ok==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
