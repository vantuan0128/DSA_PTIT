/*
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K =  101 là số BDN, k=102 không phải là số BDN.

Số BDN của N là số P =M*N sao cho P là số BDN. Cho số tự nhiên N (N<1000), hãy tìm số BDN nhỏ nhất của N.

Ví dụ. Với N=2, ta tìm được số BDN của N là P = 5*2=10. N = 17 ta tìm được số BDN của 17 là P = 653*17=11101.

Input:
3
2
12
17
Output:
10
11100
11101
*/

#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		queue <ll> q;
		q.push(1);
		while(1){
			ll s = q.front();
			if(s % n==0){
				cout<<s<<endl;
				break;
			}
			else{
				q.pop();
				q.push(s*10);
				q.push(s*10+1);
			}
		}
	}
	return 0;
} 
