/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán DFS.
Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán DFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
Input:
1

6  9 1 6

1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
Output:
1 2 3 4 5 6
*/
#include <bits/stdc++.h>
using namespace std;

int n,m,s,t;
vector<int> dske[1001];
int parent[1001];
bool visited[1001];
vector<int> path;

void DFS(int u){
	visited[u]=true;
	for(int x : dske[u]){
		if(!visited[x]){
			parent[x]=u;
			visited[x]=true;
			DFS(x);
		}
	}
}

void ConnectionPath(int s, int t){
	while(t != s){
		path.push_back(t);
		t=parent[t];		
	}
	path.push_back(s);
	reverse(path.begin(),path.end());
	for(int x : path){
		cout<<x<<' ';
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int k; cin>>k;
	while(k--){
		cin>>n>>m>>s>>t;
		memset(visited,false,sizeof(visited));
		memset(parent,0,sizeof(parent));
		memset(dske,0,sizeof(dske));
		path.clear();
		for(int i=1;i<=m;i++){
			int x,y; cin>>x>>y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}
		DFS(s);
		if(visited[t]==false) cout<<"-1"<<endl;
		else ConnectionPath(s,t);
	}
	return 0;
}
