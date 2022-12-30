#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, sum, a[1000];
int X[100], ok;

void Try(int i, int s, int pos){
	if(ok) return;
	for(int j = pos; j <= n; j++){
		if(s + a[j] <= sum){
			X[i] = a[j];
			s += a[j];
			if(s == sum){
				ok = 1; return;
			}
			else Try(i + 1, s, j + 1);
			s -= a[j];
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
		if(sum % 2){
			cout << "NO\n";
		}
		else{
			ok=0;
			sum /= 2;
			Try(1, 0, 1);
			if(ok==1) cout << "YES\n";
				else cout<<"NO\n";
		}
		sum=0;	
	}
}

