/*
Một xâu kí tự S = (s1, s2, .., sn) được gọi là xâu AB độ dài n nếu với mọi siÎS thì si hoặc là kí tự A hoặc si là kí tự B . 
Ví dụ xâu S = “ABABABAB” là một xâu AB độ dài 8. Cho số tự nhiên N và số tự nhiên K (1£K<N£15 được nhập từ bàn phím), 
hãy viết chương trình liệt kê tất cả các xâu AB có độ dài N chứa duy nhất một dãy K kí tự A liên tiếp.

Dữ liệu vào chỉ có một dòng ghi hai số N và K.
Input:
5 3
Output:
5
AAABA
AAABB
ABAAA
BAAAB
BBAAA
*/
#include <bits/stdc++.h>
using namespace std;
int n,k;
string a;
vector<string> v;
void check(){
	int ok=0;
	for(int i=0;i<n-k;i++){
		int count=0;	
		for(int j=i;j<i+k;j++){ //xet cac khoang do dai k
			if(a[j]=='A') count++;
		}
		if(count==k) ok++; //dam bao k ki tu lien nhau la duy nhat
	}
	if(ok==1) v.push_back(a);
}
void ql(int i){
	for(char j='A';j<='B';j++){
		a[i]=j;
		if(i==n-1) check();
		else ql(i+1); //xay dung a[1]...
	}
}
int main(){
	cin>>n>>k;
	a.resize(n); //xau a co do dai n: [0,n-1] 
	ql(0); //xay dung tu a[0]
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
