#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	cin.ignore();
	queue<int> q;
	while(t--){
		string s; cin>>s;
		if(s=="PUSH"){
			int x; cin>>x; q.push(x);
		}
		else if(s=="POP"){
			if(q.size()) q.pop();
		}
		else{
			if(q.size()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
	return 0;
}
