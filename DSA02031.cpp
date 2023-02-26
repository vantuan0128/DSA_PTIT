/*
Trong 8 chữ cái Tiếng Anh đầu tiên (ABCDEFGH) thì có 2 nguyên âm là ‘A’, ‘E’, còn lại là phụ âm.
Người ta muốn ghép các chữ cái bắt đầu từ chữ cái ‘A’ cho đến chữ cái c (‘D’ <= c <= ‘H’) 
sao cho mỗi chữ cái được sử dụng đúng một lần và xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm.
Hãy liệt kê các xâu thỏa mãn theo thứ tự từ điển.
Input: D
Output:
ABCD
ABDC
ACBD
ACDB
ADBC
ADCB
BCDA
BDCA
CBDA
CDBA
DBCA
DCBA
*/
#include <bits/stdc++.h>
using namespace std;
char c; int n;
bool check(string s){
	for(int i=1;i<s.length()-1;i++){
		if(s[i-1]!='E'&&s[i]=='A'&&s[i+1]!='E') return false;
		if(s[i-1]!='A'&&s[i]=='E'&&s[i+1]!='A') return false;
	}
	return true;
}
main(){
	cin >> c;
	string a;
	n = c-'A'+1;
	a.resize(n);
	for(int i=0; i<n; i++){
		a[i]='A'+i;
	}
	if(check(a)) cout<<a<<endl;
	while(next_permutation(a.begin(),a.end())){
		if(check(a)) cout<<a<<endl;
	}
}
