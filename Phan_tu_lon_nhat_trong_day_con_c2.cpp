#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		multiset<int> ms;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<k;i++){
			ms.insert(a[i]);
		}
		for(int i=k;i<n;i++){
			cout<<*ms.rbegin()<<" ";
			ms.erase(ms.find(a[i-k]));
			ms.insert(a[i]);
		}
		cout<<*ms.rbegin()<<endl;
	}
	return 0;
}
