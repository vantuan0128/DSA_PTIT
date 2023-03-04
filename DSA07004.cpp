/*
Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy ngoặc đúng.
Input:
4
))((
((((
(((())
)(())(((
Output:
2
2
1
3
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string str;
		cin>>str;
		stack<char> s;
		int cnt=0;
		for(int i=0;i<str.length();i++){
			if(str[i]!=')') s.push(str[i]); //day vao stack (
			else {
				if(s.size()==0){
					s.push('('); //Truong hop stack khong co dau ( thi doi luon
					cnt++;
				}
				else s.pop();
			}
		}
		cout<<cnt+s.size()/2<<endl;
	}
	return 0;
}
