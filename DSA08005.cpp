/*
Cho số tự nhiên n. Hãy in ra tất cả các số nhị phân từ 1 đến n.
Input:
2
2
5
Output:
1 10
1 10 11 100 101
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void init(){
	int n; cin>>n;
	queue<string> q;
	q.push("1");
	for(int i=1; i<=n; i++){
		string tmp=q.front();
		cout<<tmp<<' ';
		q.pop();
		q.push(tmp+"0");
		q.push(tmp+"1");
	}
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) init();
	return 0;
}
