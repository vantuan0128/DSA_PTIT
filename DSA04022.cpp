/*
Xâu ký tự S được tạo ra bằng cách bổ sung dần các ký tự chữ cái Tiếng Anh in hoa như sau.
Bước 1: Chỉ có chữ cái A
Bước 2: Thêm chữ cái B vào giữa 2 chữ A => S = "ABA"
Bước 3: Thêm chữ cái C vào giữa 2 xâu đã có ở bước 2: S = "ABACABA"
Cứ như vậy cho đến bước thứ N (0 < N < 26)
Hãy xác định ký tự thứ K trong bước biến đổi thứ N là chữ cái gì?
Input:
2
3 2
4 8
Output:
B
D
*/
#include <bits/stdc++.h>
using namespace std;
char dequy(int n, long long k){
	long long x=pow(2,n-1);
	if(k==x) return 'A'+n-1;
	if(k<x) return dequy(n-1,k);
	return dequy(n-1,k-x);
}
main(){
	int t,n; long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<dequy(n,k)<<endl;
	}
}
