#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		int a[k];
		int b[k];
		for(int i=0;i<k;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+k);
		int l=0,r=k-1;
		int ok=0;
		while(a[l]==b[l]){
			++l;
		}
		cout<<l+1<<" ";
		while(a[r]==b[r]){
			--r;
		}
		cout<<r+1<<endl;
	}
}

