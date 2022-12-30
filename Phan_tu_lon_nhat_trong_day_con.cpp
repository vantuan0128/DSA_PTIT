#include <bits/stdc++.h>
using namespace std;
void nhap(long a[], int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		long a[n];
		nhap(a,n);
		int left=0,right=left+m;
		while(left<right&&right<=n){
			cout<<*max_element(a+left,a+right)<<" ";
			left++; right++;
		}
		cout<<endl;
	}
	return 0;
}
