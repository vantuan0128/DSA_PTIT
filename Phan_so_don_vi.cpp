#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void Try(ll tu,ll mau){
	if(mau%tu == 0){
		cout<<"1/"<<mau/tu<<endl;
		return;
	}
	ll c=mau/tu+1; //Lam tron len
	cout<<"1/"<<c<<" + ";
	ll mc=mau*c;
	ll tumoi=c*tu-1*mau;
	Try(tumoi,mc);
}

int main(){
	int t; cin>>t;
	while(t--){
		ll a,b; cin>>a>>b;
		Try(a,b);
	}
	return 0;
}
