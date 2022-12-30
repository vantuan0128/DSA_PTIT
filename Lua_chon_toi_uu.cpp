#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		pair<int,int> a[n];
		for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
		sort(a,a+n,cmp);
		int dem=1,cur=a[0].second;
		for(int i=1;i<n;i++){
			if(cur <= a[i].first){
				dem++;
				cur=a[i].second;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
