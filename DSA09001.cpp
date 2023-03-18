/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết chương trình thực hiện chuyển đổi biểu diễn đồ thị dưới dạng danh sách kề.
Input:
1
6  9
1  2
1  3 
2  3
2  5
3  4
3  5
4  5
4  6
5  6
Output:
1: 2 3
2: 1 3 5
3: 1 2 4 5
4: 3 5 6
5: 2 3 4 6
6: 4 5
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define pb push_back
int n,m;
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int> dske[1005];
		for(int i=1;i<=m;i++){
			int x,y; cin>>x>>y;
			dske[x].pb(y);
			dske[y].pb(x);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int y : dske[i]){
				cout<<y<<' ';
			}
			cout<<endl;
		}
	}
	return 0;
}
