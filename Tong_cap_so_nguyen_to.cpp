#include <bits/stdc++.h>
using namespace std;
int ktSNT(int a){
	if(a<2) return 0;
	if(a%2==0&&a!=2) return 0;
	for(int i=3;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int ok=0;
		for(int i=2;i<=n;i++){
			if(ktSNT(i)==1&&ktSNT(n-i)==1){
				cout<<i<<" "<<n-i<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"-1"<<endl;
	}
	return 0;
}
