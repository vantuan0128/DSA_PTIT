/*
Giả sử bạn cần viết N ký tự giống nhau lên màn hình. Bạn chỉ được phép thực hiện ba thao tác dưới đây với chi phí thời gian khác nhau:
Thao tác insert: chèn một ký tự với thời gian là X.
Thao tác delete: loại bỏ ký tự cuối cùng với thời gian là Y.
Thao tác copying: copy và paste tất cả các ký tự đã viết để số ký tự được nhân đôi với thời gian là Z.
Hãy tìm thời gian ít nhất để có thể đưa ra màn hình N ký tự giống nhau. 
Ví dụ với N = 9, X =1, Y = 2, Z =1 ta có kết quả là 5 bằng cách thực hiện: insert, insert, copying, copying, insert.
Input:
2
9
1 2 1
10
2 5 4
Output:
5
14
*/
#include <bits/stdc++.h>
using namespace std;
int tinh(int n, int x, int y, int z){
	int F[105]={0},i;
	F[1]=x;
	for(int i=2;i<=n;i++){
		if(i % 2 == 0)
			F[i] = min(F[i-1] + x,F[i/2] + z);
		else
			F[i] = min(F[i-1] + x,F[(i+1)/2] + z + y);
	}
	return F[n];
}
main(){
	int t,n,x,y,z;
	cin>>t;
	while(t--){
		cin>>n>>x>>y>>z;
		cout<<tinh(n,x,y,z)<<endl;
	}
}
