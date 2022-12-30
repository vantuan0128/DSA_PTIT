#include <bits/stdc++.h>
using namespace std;
int n,s,check[100],a[100],x[100],ok;
void ql(int i, int k, int sum){
	if(sum==s){
			cout<<"[";
		for(int i=1;i<k;i++){
			cout<<x[i];
			if(i!=k-1) cout<<" ";
		}
		cout<<"]"<<" ";
		ok=1;
	}
	else {	
		for(int j=i;j<=n;j++){
			if(check[j]==0&&sum+a[j]<=s){
			check[j]=1;
			x[k]=a[j];
			ql(j+1,k+1,sum+a[j]);
			check[j]=0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		ok=0;
		cin>>n>>s;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ql(1,1,0);
		if(ok==1) cout<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
