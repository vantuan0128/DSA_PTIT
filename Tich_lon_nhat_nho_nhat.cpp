#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		long long a[n],b[m];
		nhap(a,n);
		sort(a,a+n);
		nhap(b,m);
		sort(b,b+m);
		cout<< (long long)a[n-1]*b[0]<<endl;
	}
	return 0;
}
