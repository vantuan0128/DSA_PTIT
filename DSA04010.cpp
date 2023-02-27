/*
Cho mảng A[] gồm N số có cả các số âm và số dương. Nhiệm vụ của bạn là tìm mảng con liên tục có tổng lớn nhất của mảng. 
Ví dụ với mảng A[]={-2, -5, 6, -2,-3, 1, 5, -6} ta có kết quả là 7 tương ứng với dãy con {6, -2, -3, 1, 5}.
Input:
1
8
-2 -5 6 -2 -3 1 5 -6
Output: 7
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int cur = -1e9+7,temp = 0;
		for(int i=0;i<n;i++){
			temp = 0;
			for(int j=i;j<n;j++){
				temp += a[j];
				if(temp < 0)break;
				else cur = max(cur,temp);
			}
		}
		cout<<cur<<endl;
	}
	return 0;
}
