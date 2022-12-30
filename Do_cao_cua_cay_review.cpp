#include <bits/stdc++.h>
using namespace std;

bool used[100001];
int d[100001];
vector<int> adj[100001];

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
		int n; cin>>n;
		for(int i=0;i<n-1;i++){
			int x,y; cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		memset(used,false,sizeof(used));
		memset(d,0,sizeof(d));
		bfs(1);
		cout<<*max_element(d+1,d+n+1);
		for(int i=1;i<=n;i++) adj[i].clear();
		cout<<endl;
	}
	return 0;
}
