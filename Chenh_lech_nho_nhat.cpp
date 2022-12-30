#include<bits/stdc++.h>
using namespace std; // ki thuat 2 con tro 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x;
	cin>>x;
	while(x--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int k=1000000;
		for(int i=0;i<n;i++){
			int l=i;
			int r=l+1;
			k=min(k,abs(a[r]-a[l]));
		}
		cout<<k<<endl;
	}
}
