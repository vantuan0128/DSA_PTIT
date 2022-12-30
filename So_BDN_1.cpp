#include <bits/stdc++.h>

using namespace std;
using ll=long long;

void process(){
	queue <ll> q;
		ll n; cin>>n;
		q.push(1);
		ll dem=0;
		while(1){
			ll s=q.front();
			if(s <= n){
				dem++;
				q.pop();
			}
			else break;
			q.push(s*10);
			q.push(s*10+1);
		}
		cout<<dem<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		process();
	}
	return 0;
}
