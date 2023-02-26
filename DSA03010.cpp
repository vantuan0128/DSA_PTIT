/*
Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. 
Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].
Input:
2
4
4 3 2 6
5
4 2 7 6 9
Output:
29
62
*/
#include <bits/stdc++.h>
using namespace std;
main(){
	int t,n,a; cin>>t;
	while(t--){
		cin>>n;
		priority_queue<int,vector<int>, greater<int>> q;
		for(int i=0;i<n;i++){
			cin>>a;
			q.push(a);
		}
		long long kq=0;
		while(q.size()>=2){
			int x=q.top();q.pop();
			int y=q.top();q.pop();	
			q.push(x+y);
			kq+=x+y;
		}
		cout<<kq<<endl;
	}
}
