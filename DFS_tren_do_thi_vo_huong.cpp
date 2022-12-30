#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int n,m,p;
bool visited[1001];
vector<int> dske[1001];
void inp(){
	memset(dske,0,sizeof(dske));
	cin>>n>>m>>p;
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		dske[x].pb(y);
		dske[y].pb(x);
	}
	memset(visited,false,sizeof(visited));
}

void DFS(int u){
	cout<<u<<' ';
	visited[u]=true;
	for(int x : dske[u]){
		if(!visited[x]){
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
		inp();
		DFS(p);
		cout<<endl;
	}
	return 0;
}
