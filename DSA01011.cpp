/*
Hãy viết chương trình nhận vào một chuỗi (có thể khá dài) các ký tự số và đưa ra màn hình hoán vị kế tiếp của các ký tự số đó
(với ý nghĩa là hoán vị có giá trị lớn hơn tiếp theo nếu ta coi chuỗi đó là một giá trị số nguyên). Chú ý: Các ký tự số trong dãy có thể trùng nhau.

Ví dụ:               123 -> 132

279134399742 -> 279134423799  
Input:
3
1 123
2 279134399742
3 987
Output:
1 132
2 279134423799
3 BIGGEST
*/
#include <bits/stdc++.h>
using namespace std;
int n,ok;
string s;
void sinh(){
	cin>>s;
	int i=s.length()-2;
	while(i>=0&&s[i]>=s[i+1]) i--;
	if(i==-1) ok=0;
	else{
		int j=s.length()-1;
		while(s[j]<=s[i]) j--;
		swap(s[i],s[j]);
		reverse(s.begin()+i+1,s.end());
	}
}
int main(){
	int t; cin>>t;
	int n;
	while(t--){
		ok=1;
		cin>>n;
		sinh();
		if(ok==0) cout<<n<<' '<<"BIGGEST\n";
		else cout<<n<<' '<<s<<endl;
	}
	return 0;
}
