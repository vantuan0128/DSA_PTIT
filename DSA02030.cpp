/*
Cho chữ cái c in hoa (‘A’ < c < ’K’) và số nguyên K (0 < K < (c – ‘A’)).
Hãy tìm cách  liệt kê tất cả các xâu ký tự khác nhau được tạo ra bởi các chữ cái tính từ ‘A’ đến ký tự c. 
Các ký tự được phép lặp lại nhưng không tính các xâu là hoán vị của xâu nào đó đã liệt kê trước đó.
Xem ví dụ để hiểu thêm yêu cầu đề bài.
Input: D 2
Output:
AA
AB
AC
AD
BB
BC
BD
CC
CD
DD
*/
#include <bits/stdc++.h>
using namespace std;
char c; int k;
int C[30];
void ql(int i){
	int j;
	for(j=C[i-1]+1;j<=c-'A'+1;j++){
			C[i]=j;
			if(i==k){
			for(int i=1;i<=k;i++) cout<<char(C[i]+'A'-1);
				cout<<endl;
			}
			else ql(i+1);
	}
}
int main(){
	cin>>c>>k;
	C[0]=0;
	ql(1);
}
