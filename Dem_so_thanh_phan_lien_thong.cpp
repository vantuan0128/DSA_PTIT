#include <bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1001];
vector<int> dske[1001]; 

void DFS(int u){
	visited[u]=true;
	for(int x : dske[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
} 

void process(){
	int ans=0; //Khoi tao so thanh phan lien thong
	for(int i=1;i<=n;i++){ //Duyet tat ca cac dinh
		if(!visited[i]){
			ans++; //Tang so thanh phan lien thong
			DFS(i);
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
		process();
	}
	return 0;
}
