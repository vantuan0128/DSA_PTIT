#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		int i;
		map<int,int> mp;
		for(i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int ok=0;
		for(auto it: mp){
			if(it.second>n/2){
				cout<<it.first<<" "<<endl;
				ok=1; break;
			}
		}
		if(ok==0) cout<<"NO"<<endl;
	}
} 
