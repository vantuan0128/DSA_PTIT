/*
Cho một xâu ký tự S không có ký tự lặp lại. Hãy đưa ra tất cả các tập con của xâu ký tự S theo thứ tự từ điển.
Input:
1
3
abc
Output:
a ab abc ac b bc c
*/
#include <bits/stdc++.h>
using namespace std;

string s;
int n,k,x[30];
vector <string> v;

void ql(int i){
	for(int j=x[i-1]+1;j<=n;j++){
		x[i]=j;
		if(i==k){
			string tmp="";
			for(int h=1;h<=k;h++){
			 	tmp += s[x[h]-1];
			}
			v.push_back(tmp);
		}
		else ql(i+1);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		v.clear();
		cin>>n;
		s.resize(n); cin>>s;
		for(int i=1;i<=s.size();i++){
			k=i;
			ql(1);
		}
		sort(v.begin(),v.end());
		for(string x : v){
			cout<<x<<' ';
		}
		cout<<endl;
	}
	return 0;
}
