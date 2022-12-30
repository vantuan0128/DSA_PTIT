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
		dske[y].pb(x);
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
