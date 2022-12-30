#include <bits/stdc++.h>
using namespace std;
int n,s;
int a[30],b[30],ok,sum;
vector<vector<int>> res;
void add(int n){
	vector<int>temp;
	for(int i=1;i<=n;i++) temp.push_back(b[i]);
	res.push_back(temp);
}
void ql(int i, int sum, int cur){
	if(sum==s) {
		add(i-1);
		ok=1; return;
	}
	for(int j=cur;j<=n;j++){
		sum+=a[j];
		b[i]=a[j];
		if(sum<=s) ql(i+1,sum,j);
		sum-=a[j];
	}
}
main(){
	int t; cin>>t;
	while(t--){
		res.clear();
		cin>>n>>s; ok=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ql(1,0,1);
		if(ok==0) cout<<"-1"<<endl;
		else cout<<res.size()<<" ";
		for(int i=0;i<res.size();i++){
			cout<<"{";
			for(int j=0;j<res[i].size()-1;j++) cout<<res[i][j]<<" ";
			cout<<res[i][res[i].size()-1]<<"}"<<" ";
		}
	cout<<endl;
	} 
}
