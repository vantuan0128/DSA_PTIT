#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,ok; cin>>t;
	while(t--){
		cin>>n;
		ok=0;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i] , b[i] = a[i];
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(!(a[i] == b[i] || a[i] == b[n-i-1])){
				cout<<"No"<<endl; ok=1;
				break;
			}
		}
		if(ok==0) cout<<"Yes"<<endl;
	}
	return 0;
}
