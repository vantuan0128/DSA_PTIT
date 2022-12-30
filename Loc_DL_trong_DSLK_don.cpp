#include <bits/stdc++.h>
using namespace std;
vector<int> res;
int main(){
	int n; cin>>n;
	int f[100005];
	memset(f,0,sizeof(f));
	for(int i=0;i<n;i++){
		int x; cin>>x;
		res.push_back(x);
		f[x]++;
	}
	for(int i=0;i<res.size();i++){
		if(f[res[i]]>0){
			cout<<res[i]<<" ";
			f[res[i]]=0;
		}
	}
}
