/*
Ma trận kề A của một đồ thị vô hướng là một ma trận chỉ có các số 0 hoặc 1 trong đó A[i][j] = 1 có ý nghĩa là đỉnh i kề với đỉnh j (chỉ số tính từ 1).

Danh sách kề thì liệt kê các đỉnh kề với đỉnh đó theo thứ tự tăng dần.

Hãy chuyển biểu diễn đồ thị từ dạng ma trận kề sang dạng danh sách kề.
Input:
3
0 1 1
1 0 1
1 1 0
Output:
2 3
1 3
1 2
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define fi first
#define se second
#define pb push_back

int n;
int a[1005][1005];

int main(){
	cin>>n;
	vector<int> v[1005];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]){
				v[i].pb(j);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int x : v[i]){
			cout<<x<<' ';
		}
		cout<<endl;
	}
	return 0;
}
