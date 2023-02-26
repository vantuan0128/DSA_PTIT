/*
Cho mảng A[] gồm các số từ 0 đến 9. 
Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. 
Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số.
Input:
2
6
6 8 4 5 2 3
5
5 3 0 7 4
Output:
604
82
*/
#include <bits/stdc++.h>
using namespace std;
main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long a[n];
		for(long &x : a) cin>>x;
		sort(a,a+n);
		long x=0,y=0;
		for(int i=0;i<n;i++){
			if(i%2==0) x=x*10+a[i];
			else y=y*10+a[i]; 
		}
		cout<<x+y<<endl;
	}
	return 0;
}
