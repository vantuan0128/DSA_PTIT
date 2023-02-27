/*
Cho số nguyên dương n. Hãy cho biết có bao nhiêu dãy số nguyên dương có tổng các phần tử trong dãy bằng n. 
Dữ liệu vào: dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ liệu ghi một số nguyên dương n duy nhất không qua 10^18.
Kết quả: Mỗi bộ dữ liệu ghi ra một số nguyên duy nhất là số dư của kết quả tìm được khi chia cho 123456789.
Input:
1
3
Output: 4
Giải thích test: 3 co the bieu dien [1 1 1] [2 1] [1 2] [3]
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;

ll powMod(ll a, ll b, ll c){
	ll res=1;
	while(b){
		if(b %2 ==1){
			res *= a; res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<powMod(2,n-1,123456789)<<endl;
	}
	return 0;
}
