/*
Cho số nguyên dương N được biểu diễn như một xâu ký tự số. 
Nhiệm vụ của bạn là tìm tổng của tất cả các số tạo bởi các xâu con của N. Ví dụ N=”1234” ta có kết quả là 1670 = 1 + 2 + 3 + 4 + 12 + 23 + 34 + 123 + 234 + 1234.
Input:
2
1234
421
Output:
1670
491
*/
#include <bits/stdc++.h>
using namespace std;
int chuyen(char c){
	return c-'0';
}
long long tinh(string s){
	int n=s.length(),i;
	long long F[15],kq=0;
	F[0]=chuyen(s[0]);
	kq=F[0];
	for(int i=1;i<n;i++){
		int t=chuyen(s[i]);
		F[i]=F[i-1]*10+t*(i+1);
		kq=kq+F[i];
	}
	return kq;
}
main(){
	int t; string s;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}
}
