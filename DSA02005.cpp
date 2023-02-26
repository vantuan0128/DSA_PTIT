/*
Cho xâu ký tự S bao gồm các ký tự in hoa khác nhau. Hãy đưa ra tất cả các hoán vị của xâu ký tự S. Ví dụ S=”ABC” ta có kết quả {ABC ACB BAC BCA CAB CBA}. 
*/
#include <bits/stdc++.h>
using namespace std;
string s,x[11];
int check[11];
void in(){
	for(int i=0;i<s.length();i++) cout<<x[i];
	cout<<" ";
}
void Try(int i){
	for(int j=0;j<s.length();j++){
		if(check[j]==0){
			x[i]=s[j];
			check[j]=1;
			if(i==s.length()-1) in();
			else Try(i+1);
			check[j]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>s;
		Try(0);
		cout<<endl;
	}
	return 0;
}
