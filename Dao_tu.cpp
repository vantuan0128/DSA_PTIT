#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	cin.ignore();
	while(t--){
		stack <string> s;
		string a;
		getline(cin,a);
		stringstream ss(a);
		string token;
		while(ss>>token){
			s.push(token);
		}
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}
	return 0;
}
