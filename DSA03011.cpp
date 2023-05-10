/*
Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. 
Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].
In ra đáp án của bộ test trên từng dòng, theo modulo 10^9+7.
Input:
1
7
2 4 1 2 10 2 3
Output:
59
*/
#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
main(){
	long long t,n,a; cin>>t;
	while(t--){
		cin>>n;
		priority_queue<long long,vector<long long>, greater<long long>> q;
		for(int i=0;i<n;i++){
			cin>>a;
			q.push(a);
		}
		long long kq=0,tong;
		while(q.size()>=2){
			long long x=q.top();q.pop();
			long long y=q.top();q.pop();
			tong=(x+y)%M;	
			q.push(tong);
			kq = (kq+tong)%M;
		}
		cout<<kq<<endl;
	}
}
