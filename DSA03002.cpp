/*
Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. 
Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác.
Lỗi duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại.  Cho hai số, A và B, tính tổng nhỏ nhất và lớn nhất mà Tèo có thể nhận được.
*/

#include <bits/stdc++.h>
using namespace std;
/*
void min_sum(string a, string b){
	for(char &x : a){
		if(x =='6') x='5';
	}
	for(char &y : b){
		if(y =='6') y='5';
	}
	cout<<stoll(a) + stoll(b)<<" ";
}
void max_sum(string a, string b){
	for(char &x : a){
		if(x =='5') x='6';
	}
	for(char &y : b){
		if(y =='5') y='6';
	}
	cout<<stoll(a) + stoll(b)<<endl;
}
*/
void find(string &a, string &b){
	for(int i=0;i<a.length();i++){
		if(a[i] == '6') a[i] ='5';
	}
	for(int i=0;i<b.length();i++){
		if(b[i] == '6') b[i] ='5';
	}
	cout<<stoll(a) +stoll(b)<<" ";
	for(int i=0;i<a.length();i++){
		if(a[i] == '5') a[i] ='6';
	}
	for(int i=0;i<b.length();i++){
		if(b[i] == '5') b[i] ='6';
	}
	cout<<stoll(a) +stoll(b)<<endl;
}
int main(){
		string a,b;
		cin>>a>>b;
//		min_sum(a,b);
//		max_sum(a,b);
		find(a,b);
	return 0;
}
