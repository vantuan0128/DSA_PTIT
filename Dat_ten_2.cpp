#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
bool check(){
	for(int i=1;i<k;i++){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}
void xuly(){
	cin>>n>>k;
	for(int i=1;i<=k;i++) a[i]=i;
	while(1){
		if(check()){
			for(int i=1;i<=k;i++){
				cout<<char(a[i]+'A'-1);
			}
			cout<<endl;
		}
		int i=k;
		while(i>0&&a[i]==n-k+i) i--;
		if(i==0) return;
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		xuly();
	}
	return 0;
}

