/*
Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray. 
Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít. 
Ví dụ với n=3 ta có 23 mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. 
Hãy viết chương trình chuyển đổi một xâu mã nhị phân X có độ dài n thành một xâu mã Gray.
Input:
2
01001
01101
Output:
01101
01011
*/
#include <bits/stdc++.h>
using namespace std;
void xuly(){
	string s; cin>>s;
	for(int i=0;i<s.length();i++){
		if(i==0) cout<<s[i];
		else{
			if(s[i]!=s[i-1]) cout<<1;
			else cout<<0;
		}
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--) xuly();
	return 0;
}
