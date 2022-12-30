#include <bits/stdc++.h>
using namespace std; 
int main(){
	int n; cin>>n;
	cin.ignore();
	deque <int> d;
	while(n--){
		string s; cin>>s;
		if(s == "PUSHFRONT"){
			int tmp; cin>>tmp;
			d.push_front(tmp);
		}
		else if (s == "PUSHBACK"){
			int tmp; cin>>tmp;
			d.push_back(tmp);
		}
		else if (s == "PRINTFRONT"){
			if(!d.empty()) cout<<d.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if (s == "PRINTBACK"){
			if(!d.empty()) cout<<d.back()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if (s == "POPFRONT" && !d.empty()) d.pop_front();
		else if (s == "POPBACK" && !d.empty()) d.pop_back();
	}
	return 0;
}
