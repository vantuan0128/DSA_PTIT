/*
Cho một cây có N node, gốc tại  1. Độ cao của một node u được tính bằng khoảng cách từ u tới node gốc. 
Độ cao của node gốc bằng 0. Nhiệm vụ của bạn là hãy tìm node xa node gốc nhất và in ra độ cao của node này.
Input:
2
5
1 2
1 3
2 4
2 5
4
1 2
2 3
3 4
Output:
2
3
*/
#include <bits/stdc++.h>
using namespace std;

bool used[100001];
int d[100001];
vector<int> adj[100001];
int n;

void bfs(int u){
	d[u]=0;
	used[u]=true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v=q.front(); q.pop();
		for(int x : adj[v]){
			if(!used[x]){
				used[x]=true;
				d[x]=d[v]+1;
				q.push(x);
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
		memset(used,false,sizeof(used));
		memset(d,0,sizeof(d));
		cin>>n;
		for(int i=1;i<=n-1;i++){
			int x,y; cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bfs(1);
		cout<<*max_element(d+1,d+n+1)<<endl;
		for(int i=1;i<=n;i++) adj[i].clear();
	}
	return 0;
}
