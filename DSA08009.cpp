/*
Cho hai số nguyên dương S và T (S, T<10000) và hai thao tác (a), (b) dưới đây:

Thao tác (a): Trừ S đi 1  (S = S-1) ;

Thao tác (b): Nhân S với 2 ( S = S*2);

Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất.
Ví dụ với    S =2, T=5 thì số các bước ít nhất để dịch chuyển S thành T thông qua 4 thao tác sau:

Thao tác (a): 2*2 = 4;

Thao tác (b): 4-1 = 3;

Thao tác (a): 3*2 = 6;

Thao tác (b): 6-1 = 5;
Input:
3
2 5
3 7
7 4
Output:
4
4
3
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int solve(int s, int t){
	queue<pair<int,int>> q;
	set<int> se;
	se.insert(s);
	q.push({s,0});
	while(!q.empty()){
		pair<int,int> top=q.front(); q.pop();
		if(top.first==t) return top.second;
		if(top.first*2==t||top.first-1==t) return top.second+1;
		if(se.find(top.first*2)==se.end() && top.first<t){
			q.push({top.first*2,top.second+1});
			se.insert(top.first*2);
		}
		if(se.find(top.first-1)==se.end() && top.first>1){
			q.push({top.first-1,top.second+1});
			se.insert(top.first-1);
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int s,t; cin>>s>>t;
		cout<<solve(s,t)<<endl;
	}
	return 0;
}
