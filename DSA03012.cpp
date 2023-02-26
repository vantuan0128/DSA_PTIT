/*
Cho xâu ký tự S bao gồm các ký tự in thường. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S 
để hai ký tự giống nhau đều không kề nhau hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.
Input:
3
geeksforgeeks
bbbabaaacd
bbbbb
Output:
1
1
-1
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int cnt[256]={0};
		for(char x : s) cnt[x]++;
		int res=0;
		for(int i=0;i<256;i++) res=max(res,cnt[i]);
		if(res<=s.size()-res+1) cout<<"1\n";
		else cout<<"-1\n";
	}
	return 0;
}
