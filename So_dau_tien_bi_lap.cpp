#include <bits/stdc++.h>
#include <unordered_map> 
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long a[n];
		map<long,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int ok=0;
		for(int i=0;i<n;i++){
			if(mp[a[i]]>1){
				cout<<a[i]<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"NO"<<endl;
	}
	return 0;
}
