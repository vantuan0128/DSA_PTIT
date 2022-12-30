#include<bits/stdc++.h>
using namespace std;
vector <int>v;
int main(){
	while(true){
		string s;
		cin>>s;
		if(s=="push"){
			int x;
			cin>>x;
			v.push_back(x);
		}
		else if(s=="pop"){
			v.pop_back();
		}
		else if(v.size()==0){
			cout<<"empty";
			break;
		}
		else{
			for(auto it:v){
				cout<<it<<" ";
			}
			cout<<endl;
		}
	}
	return 0; 
}
