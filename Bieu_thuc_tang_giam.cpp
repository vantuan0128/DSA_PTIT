#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t; cin>>t;
	string s;
	while(t--) {
		cin >> s;
		int m = s.size();
		stack <int> t;
		for(int i = 0; i <= m; i++){
			if(s[i] == 'I'|| i == m){
				cout << i+1;
				while(!t.empty()){
					cout << t.top();
					t.pop();
				}
			}
			else if (s[i] == 'D') t.push( i + 1 );
		}
		cout << endl;
	}
	return 0;
}
