/*
Cho đồ thị vô hướng có N đỉnh và M cạnh. Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?
Input:
1
6 5
1 2
2 3
3 4
1 4
5 6
2
1 5
2 4
Output:
NO
YES
*/
#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> dske[1001];
bool visited[1001];
int parent[1001];


void DFS(int u){
	visited[u]=true;
	for(int x : dske[u]){
		if(!visited[x]){
			visited[x]=true;
			parent[x]=u;
			DFS(x);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		memset(dske,0,sizeof(dske));
		memset(parent,0,sizeof(parent));
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y; cin>>x>>y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}
		int q; cin>>q;
		while(q--){
			memset(visited,false,sizeof(visited));			
			int x,y; cin>>x>>y;
			DFS(x);
			if(visited[y]==true) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}
