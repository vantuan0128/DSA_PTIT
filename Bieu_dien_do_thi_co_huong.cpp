#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define fi first
#define se second
#define pb push_back
int n,m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin>>t;
	while(t--){
	vector<int> v[1005];
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y; cin>>x>>y;
			v[x].pb(y);
		}
		for(int i=1;i<=n;i++){
			for(int x : v[i]){
				sort(v[i].begin(),v[i].end());
			}
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int x : v[i]){
				cout<<x<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}
