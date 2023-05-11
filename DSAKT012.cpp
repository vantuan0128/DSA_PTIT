/*
Có n tờ tiền có giá trị t[1], t[2], …, t[n].
Hãy tìm cách trả ít tờ tiền nhất với số tiền đúng bằng S
Chú ý: Các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ được dùng một lần.
Input:
3 5
1 4 5
Output:
1
*/

#include <bits/stdc++.h>
using namespace std;
int n,s,A[30]; int kq=1e9;
void quaylui(int i, int sum, int x){
	if(sum > s || x > kq) return;
	if(i==n){
		if(sum==s) kq=min(kq,x);
		return;
	}
	quaylui(i+1,sum,x);
	quaylui(i+1,sum+A[i],x+1);
}
int main(){
	cin>>n>>s;
	for(int i=0;i<n;i++) cin>>A[i];
	quaylui(0,0,0);
	if(kq==1e9) cout<<"-1";
	else cout<<kq;
}
