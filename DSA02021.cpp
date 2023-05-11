/*
Cho một xâu s. Xâu F(s) được xác định bằng cách ghép xâu xâu s ban đầu với xâu s sau khi đã được quay vòng sang bên phải 1 kí tự 
(kí tự cuối cùng của s được chuyển lên đầu).

Thực hiện liên tiếp các bước cộng xâu như trên với xâu mới thu được, ta có được xâu X.

Nhiệm vụ của bạn là hãy xác định kí tự thứ N trong xâu X là kí tự nào?

Input: Dòng đầu ghi số bộ test T (T<10). Mỗi bộ test gồm một xâu s có độ dài không vượt quá 30 kí tự và số nguyên N (1 ≤ N ≤ 10^18).
Input:
1
COW 8
Output:
C
Giải thích test: COW à COWWCO à COWWCOOCOWWC. Kí tự thứ 8 là ‘C’
*/
#include <bits/stdc++.h>
using namespace std;
char quaylui(string s, long long n){
	long long len = s.length();
	if(n<len) return s[n];
	while(2*len <= n) len*=2;
	if(len==n) return quaylui(s,n-1);
	return quaylui(s,n-len-1);
}
main(){
	int t; string s; long long n;
	cin>>t;
	while(t--){
		cin>>s>>n;
		cout<<quaylui(s,n-1)<<endl;
	}
}
