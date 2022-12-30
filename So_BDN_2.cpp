#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		queue <ll> q;
		q.push(1);
		while(1){
			ll s=q.front();
			if(s%n==0){
				cout<<s<<endl;
				break;
			}
			else{
				q.pop();
				q.push(s*10);
				q.push(s*10+1);
			}
		}
	}
	return 0;
} 
