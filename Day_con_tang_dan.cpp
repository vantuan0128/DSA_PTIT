#include <bits/stdc++.h>
using namespace std;
int n,a[20];
string k;
vector<int> x;
vector<string> v;
vector<vector<int>> ans;
void ql(int i){
	for(int j=i+1;j<=n;j++){
		if(a[j]>a[i]){
			x.push_back(a[j]);
			if(x.size()>1) ans.push_back(x);
			ql(j);
			x.erase(x.end()-1,x.end());
		}
	}
}
int main(){
	cin>>n;
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ql(0);
	for(int i=0;i<ans.size();i++){
		k="";
		for(int j=0; j<ans[i].size();j++){
			k+=to_string(ans[i][j]);
			k+=" ";
		}
		v.push_back(k);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}
