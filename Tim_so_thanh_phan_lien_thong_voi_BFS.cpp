#include <bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1001];
vector<int> dske[1001]; 

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x : dske[v]){
			if(!visited[x]){
				visited[x]=true;
				q.push(x);
			}
		}
	}
} 

void ConnectedPath(){
	int ans=0; //Khoi tao so thanh phan lien thong
	for(int i=1;i<=n;i++){ //Duyet tat ca cac dinh
		if(!visited[i]){
			ans++; //Tang so thanh phan lien thong
			BFS(i);
		}
	}
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int k; cin>>k;
	while(k--){
		memset(dske,0,sizeof(dske));
		memset(visited,false,sizeof(visited));
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y; cin>>x>>y;
			dske[x].push_back(y);
			dske[y].push_back(x);
			
		}
		ConnectedPath();
	}
	return 0;
}
