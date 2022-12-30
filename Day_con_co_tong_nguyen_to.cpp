#include <bits/stdc++.h>
using namespace std;

int n,a[30],k,X[30];

vector <vector<int>> res;

bool SNT(int n){
	if(n < 2) return false;
	if(n == 2) return true;
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

void Try(int i){
	for(int j = X[i-1]+1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k){
			int sum = 0;
			for(int i=1; i<=k; i++) sum += a[X[i]];
			if(SNT(sum)){
				vector <int> v;
				for(int i=k; i>=1; i--){
					v.push_back(a[X[i]]);
				}
				res.push_back(v);
			}
		}
		else Try(i+1); 
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		for(int i=1; i<=n; i++){
			k = i;
			Try(1);
		}
		sort(res.begin(),res.end());
		if(res.size() != 0){
			for(int i=0; i<res.size(); i++){
				for(int j=0; j<res[i].size(); j++){
					cout<<res[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else continue;
		res.clear();
	}
	return 0;
}
