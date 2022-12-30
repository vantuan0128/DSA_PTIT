#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			int hieu=a[i+1]-a[i];
			if(i==n-1) break;
			if(hieu != 1){
				if(hieu==0) continue;
				else dem+=hieu-1;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
