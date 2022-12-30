#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void init(){
	int n; cin>>n;
	queue <ll> q;
	q.push(9);
	while(1){
		if(q.front()%n==0){
			cout<<q.front()<<endl;
			break;
		}
		else{
			ll tmp=q.front();
			q.push(tmp*10);
			q.push(tmp*10+9);
			q.pop();
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--) init();
	return 0;
}
