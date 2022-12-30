#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
using ll=long long;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.se < b.se;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			pair<int,int> x; cin>>x.fi>>x.se;
			v.pb(x);
		}
		sort(v.begin(),v.end(),cmp);
		int dem=1;
		int kthuc=v[0].se;
		for(int i=1;i<v.size();i++){
			if(kthuc <= v[i].fi){
				++dem;
				kthuc=v[i].se;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
