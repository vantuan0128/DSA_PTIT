#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k,ok;
int a[1000],tong;

void Try(int i, int sum){
	if(ok) return;
	for(int j = i; j<=n; j++){
		if(sum + a[j] <= tong){
			sum += a[j];
			if(sum == tong){
				ok = 1;
				return;
			}
			else Try(i+1,sum);
			sum -= a[j];
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			tong+=a[i];
		}
		if(tong % k != 0){
			cout<<0<<endl;
			tong=0;
		}
		else{
			tong /= k;
			ok=0;
			Try(1,0);
			if(ok == 1) cout<<1<<endl;
			tong=0;
		}
	}
	return 0;
}

