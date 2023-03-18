/*
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K = 1, 10, 101. 
Cho số tự nhiên N (N<263). Hãy cho biết có bao nhiêu số BDN nhỏ hơn N. Ví dụ N=100 ta có 4 số BDN bao gồm các số: 1, 10, 11, 100.
Input:
3
10
100
200
Output:
2
4
7
*/
#include <bits/stdc++.h>

using namespace std;
using ll=long long;

void process(){
	queue <ll> q;
		ll n; cin>>n;
		q.push(1);
		ll dem=0;
		while(1){
			ll s=q.front();
			if(s <= n){
				dem++;
				q.pop();
			}
			else break;
			q.push(s*10);
			q.push(s*10+1);
		}
		cout<<dem<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		process();
	}
	return 0;
}
