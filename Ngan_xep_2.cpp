#include <bits/stdc++.h>
using namespace std;
stack <int> s;
int main(){
	int t; cin>>t;
	while(t--) {
		string cur;
		cin>>cur;
		if(cur=="PUSH"){
			int x; cin>>x;
			s.push(x);
		}
		else if(cur=="POP"){
				if(s.size()!=0) s.pop();
			}
		else if(s.size()!=0){
			cout<<s.top()<<endl;
			}
		else cout<<"NONE"<<endl; 
	}
	return 0;
}
