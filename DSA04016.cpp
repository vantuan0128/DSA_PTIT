/*
Cho hai mảng đã được sắp xếp A[], B[] gồm M, N phần tử theo thứ tự và số K. 
Nhiệm vụ của bạn là tìm phần tử ở vị trí số K sau khi trộn hai mảng để nhận được một mảng được sắp xếp.
Input:
1
5 4 5
2 3 6 7 9
1 4 8 10
Output: 6
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+m];
		for(int i=0;i<n+m;i++) cin>>a[i];
		sort(a,a+n+m);
		cout<<a[k-1]<<endl;
	}
	return 0;
}
