#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define fi first
#define se second
#define pb push_back

int a[1005][1005]={0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s; getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			a[i][stoi(tmp)]=a[stoi(tmp)][i]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
