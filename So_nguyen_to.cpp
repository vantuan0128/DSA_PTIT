#include <bits/stdc++.h>
using namespace std;
int n,p,s;
vector <vector<int>> res;
vector <int> x,prime;
bool snt(int n){
	if(n<2) return false;
	if(n==2) return true;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i ==0) return false;
	}
	return true;
}
void Try(int i,int sum, int cnt){
	if(sum == s && cnt == n){
		res.push_back(x);
		return;
	}
	if(sum > s || cnt > n ) return;
	for(int j = i; j < prime.size(); j++ ){
		x.push_back(prime[j]);
		Try(j+1,sum+prime[j],cnt+1);
		x.pop_back();
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>p>>s;
		for(int i=p+1;i<=s;i++){
			if(snt(i)) prime.push_back(i);
		}
		Try(0,0,0);
		cout<<res.size()<<endl;
		for(int i=0 ; i<res.size(); i++){
			for(int j=0; j<res[i].size(); j++){
				cout<<res[i][j]<<' ';
			}
			cout<<endl;
		}
		res.clear(); prime.clear();
	}
	return 0;
}
