/*
Cho ba số N, P, S. Trong đó, P là một số nguyên tố. Nhiệm vụ của bạn là đưa ra tất cả N số nguyên tố lớn hơn P có tổng bằng S. 
Ví dụ với S = 28, P=7, N =2 ta có kết quả 11 + 17 = 28. 
Với N = 3, P = 2, S = 23 ta có kết quả : {3, 7, 13}, {5, 7, 11}
Input:
2
2  7  28
3  2  23
Output:
1
11 17
2
3 7 13
5 7 11
*/
#include <bits/stdc++.h>
using namespace std;
int n,p,s;
vector <vector<int>> res;
vector <int> x,prime;
bool snt(int n){
	if(n<2) return false;
	if(n==2) return true;
	for(int i=2;i<=sqrt(n);i++){
		if(n % i ==0) return false;
	}
	return true;
}
void Try(int i,int sum, int cnt){
	if(sum == s && cnt == n){
		res.push_back(x);
		return;
	}
	if(sum > s || cnt > n ) return;
	for(int j = i; j < prime.size(); j++ ){
		x.push_back(prime[j]);
		Try(j+1,sum+prime[j],cnt+1);
		x.pop_back();
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>p>>s;
		for(int i=p+1;i<=s;i++){
			if(snt(i)) prime.push_back(i);
		}
		Try(0,0,0);
		cout<<res.size()<<endl;
		for(int i=0 ; i<res.size(); i++){
			for(int j=0; j<res[i].size(); j++){
				cout<<res[i][j]<<' ';
			}
			cout<<endl;
		}
		res.clear(); prime.clear();
	}
	return 0;
}
