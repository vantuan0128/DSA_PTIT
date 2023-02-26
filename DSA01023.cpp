/*
Cho một tổ hợp chập K của N số nguyên dương đầu tiên (2 < K < N < 15).
Hãy xác định xem đó là tổ hợp thứ bao nhiêu nếu liệt kê tất cả các tổ hợp theo thứ tự tăng dần (tính từ 1).
*/
#include <bits/stdc++.h>
using namespace std;
int n, k, C[30],c[30];
int cnt;
map<int,vector<int>>mp;
int Check(){
	for(int i=1;i<=k;i++){
		if(C[i]!=c[i]) return 0;
	}
	return cnt;
}
void in(){
	if(Check()) cout<<cnt<<endl;
}
void quaylui(int i){
	int j;
	for(j=C[i-1]+1;j<=n-k+i;j++){
			C[i]=j;
			if(i==k){
				for(int i=1;i<=k;i++){
					mp[cnt].push_back(C[i]);
				}
				cnt++;
				in();
			}
			else quaylui(i+1);
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cnt=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>c[i];
		quaylui(1);	
	}
}
