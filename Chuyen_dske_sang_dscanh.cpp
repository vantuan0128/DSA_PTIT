#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define fi first
#define se second

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> v[1005];
	int n; cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s; 
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			if(i<stoi(tmp)) v[i].pb(stoi(tmp));
		}
	}
	for(int i=1;i<=n;i++){
		sort(begin(v[i]),end(v[i]));
	}
	for(int i=1;i<=n;i++){
		for(int x : v[i]){
			if(i<x) cout<<i<<' '<<x<<endl;
		}
	}
	return 0;
}
