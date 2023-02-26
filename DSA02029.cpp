/*
Bài toán Tháp Hà Nội đã rất nổi tiểng. 
Bắt đầu có các đĩa xếp chồng lên cột A theo thứ tự kích thước giảm dần, nhỏ nhất ở trên cùng. Cột B và cột C ban đầu không có đĩa nào cả.
Mục tiêu của bạn là di chuyển toàn bộ các đĩa theo đúng thứ tự về cột C, tuân theo các quy tắc sau:

Mỗi lần chỉ có thể di chuyển một đĩa.
Mỗi lần di chuyển sẽ lấy đĩa trên từ một trong các cột và đặt nó lên trên một cột khác.
Không được đặt đĩa lên trên đĩa nhỏ hơn.

Input: 3
Output:
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
*/
#include <bits/stdc++.h>
using namespace std;
void ql(int n, char a, char b, char c){
	if(n==1){
		cout<<a<<"-"<<c<<endl;
		return;
	}
	else{
		ql(n-1,a,c,b);
		ql(1,a,b,c);
		ql(n-1,b,a,c);
	}
}
main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	char a='1', b='2', c='3';
	int n; cin>>n;
	ql(n,a,b,c);
}

