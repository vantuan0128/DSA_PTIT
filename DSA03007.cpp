/*
Cho mảng A[], B[] đều có N phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất của  biểu thức 
P = A[0]*B[0] + A[1]*B[1] + ..+A[N-1]*B[N-1] bằng cách tráo đổi vị trí các phần tử của cả mảng A[] và B[].
Input:
2
7
1 6 3 4 5 2 7
1 1 1 2 3 4 3
7
1 6 3 5 5 2 2
0 1 9 0 1 2 3
Output:
45
27
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

int main(){
	int t; cin>>t;
	while(t--){
		long n; cin>>n;
		ll a[n],b[n];
		ll sum=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(int i=0;i<n;i++){
			sum += a[i]*b[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
