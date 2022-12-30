#include <bits/stdc++.h>
using namespace std;

int n,a[100][100],ok;
string s;

int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};

string path="DLRU";

void Try(int i, int j, string s){
	if(i==n && j==n){
		ok=1;
		cout<<s<<' ';
	}
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&j1>=1&&i1<=n&&j1<=n&&a[i1][j1]==1){
			a[i1][j1]=0;
			s+=path[k];
			Try(i1,j1,s);
			a[i1][j1]=1;
			s.pop_back(); //Loai bo 1 ki tu cuoi cung
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		s="";
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		if(a[1][1]==0||a[n][n]==0){
			cout<<"-1"<<endl;
		}
		else{
			ok=0;
			a[1][1]=0;
			Try(1,1,s);
			if(ok==0) cout<<"-1"<<endl;
			else cout<<endl;
		}
	}
	return 0;
}
