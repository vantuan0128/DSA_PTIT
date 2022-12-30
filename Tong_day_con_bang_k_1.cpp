#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000],b[1000];
vector<vector<int>> res;
void out(int n){
	vector<int> temp;
	for(int i=1;i<n;i++) temp.push_back(b[i]);
	res.push_back(temp);
}
void Try(int i, int sum, int cur){
	if(sum==k) {
		out(i);
		return ;
	}
	if(sum>k) return;
	for(int j=cur;j<=n;j++){
		sum+=a[j];
		b[i]=a[j];
		if(sum<=k) Try(i+1,sum,j+1);
		sum-=a[j];
	}
}
int main(){
	cin>>n>>k; 
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	Try(1,0,1);
	for(int i=res.size()-1;i>=0;i--){
		for(int j=0;j<res[i].size();j++) cout<<res[i][j]<<" ";
		cout<<endl;
	}
	cout<<res.size()<<endl;
	cout<<endl;
	return 0;
}
