/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều rộng bắt đầu tại đỉnh uÎV (BFS(u)=?)
Input:
1
6  9  1
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4
Output:
1 2 5 4 6 3
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back

int n,m,p;
bool visited[1001];
vector<int> dske[1001];

void inp(){
	cin>>n>>m>>p;
	memset(dske,0,sizeof(dske));
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		dske[x].pb(y);
	}
	memset(visited,false,sizeof(visited));
}

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		cout<<v<<' ';
		for(int x : dske[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		inp();
		BFS(p);
		cout<<endl;
	}
	return 0;
}
