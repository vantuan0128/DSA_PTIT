/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh uÎV đến đỉnh vÎV trên đồ thị bằng thuật toán BFS.
Input:
1
6 9 1 6
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4
Output:
1 2 5 6
*/
#include <bits/stdc++.h>
using namespace std;

int n,m,s,t;
vector<int> dske[1001];
int parent[1001];
bool visited[1001];
vector<int> path;

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x : dske[v]){
			if(!visited[x]){
				parent[x] = v;
				visited[x]=true;
				q.push(x);
			}
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
		}
		BFS(s);
		if(visited[t]==false) cout<<"-1"<<endl;
		else ConnectionPath(s,t);
	}
	return 0;
}
