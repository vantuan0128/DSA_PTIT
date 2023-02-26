/*
Cho mảng A[] gồm N phần tử.
Nhiệm vụ của bạn là tìm max = tổng xích ma từ i = 0 tới n-1 của Ai nhân i bằng cách sắp đặt lại các phần tử trong mảng. 
Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 10^9+7.
Input:
2
5
5 3 2 4 1
3
1 2 3
Output:
40
8
*/
#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,greater<int>());
		long long sum_max=0;
		for(int i=0;i<n;i++){
			sum_max=(sum_max+a[i]*(n-i-1))%M;
		}
		cout<<sum_max<<endl;
	}
	return 0;
}
