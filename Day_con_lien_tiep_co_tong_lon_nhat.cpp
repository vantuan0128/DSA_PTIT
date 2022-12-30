#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int cur= -1e9+7,temp=0;
		for(int i=0;i<n;i++){
			temp=0;
			for(int j=i;j<n;j++){
				temp+=a[j];
				if(temp<0)break;
				else cur = max(cur,temp);
			}
		}
		cout<<cur<<endl;
	}
	return 0;
}
