/*
Cho danh sách liên kết đơn lưu giữ các số nguyên được quản lý bởi con trỏ First. 
Viết chương trình con xóa tất cả các phần tử có giá trị bằng x trong danh sách liên kết đơn; chương trình con trả về số lượng các phần tử đã xóa. 
Sau khi xóa xong, liệt kê các phần tử còn lại trong danh sách liên kết đơn First. Ví dụ: Ta có Input sau:
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;
	for(int i=0;i<n;i++){
		if(a[i]!=k) cout<<a[i]<<" "; 
	}
}
