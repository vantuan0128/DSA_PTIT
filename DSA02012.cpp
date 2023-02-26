/*
Cho ma trận A[M][N]. Nhiệm vụ của bạn là đếm tất cả các đường đi từ phần tử A[0][0] đến phần tử A[M-1][N-1]. 
Bạn chỉ được phép dịch chuyển xuống dưới hoặc sang phải phần tử liền kề với vị trí hiện tại.
Đưa ra số cách di chuyển của mỗi test theo từng dòng.
Input:
2
2  3
1  2  3 
4  5  6

2  2
1  2 
3  4

Output:
3
2
Giải thích test 1: Có 3 cách di chuyển là [1 4 5 6], [1 2 5 6] và [1 2 3 6].
*/
#include <bits/stdc++.h>
using namespace std;
int a[105][105], dp[105][105];
int main(){
	int t; cin>>t;
	while(t--){
		int m,n; cin>>m>>n;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				dp[i][j]=0;
			}
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(i==1||j==1) dp[i][j]=1;
				else dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		cout<<dp[m][n]<<endl; 
	}
}
