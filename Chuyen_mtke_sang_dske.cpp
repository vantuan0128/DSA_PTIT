#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define fi first
#define se second
#define pb push_back

int n;
int a[1005][1005];

int main(){
	cin>>n;
	vector<int> v[1005];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]){
				v[i].pb(j);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int x : v[i]){
			cout<<x<<' ';
		}
		cout<<endl;
	}
	return 0;
}
