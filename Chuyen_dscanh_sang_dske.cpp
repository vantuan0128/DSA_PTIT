#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define pb push_back
int n,m;
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int> dske[1005];
		for(int i=1;i<=m;i++){
			int x,y; cin>>x>>y;
			dske[x].pb(y);
			dske[y].pb(x);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int y : dske[i]){
				cout<<y<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}
