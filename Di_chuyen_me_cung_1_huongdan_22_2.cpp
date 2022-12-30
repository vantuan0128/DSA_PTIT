#include <bits/stdc++.h>
using namespace std;
int A[15][15], N, OK; char ans[30];
void in(int k){
	for(int i=1;i<=k;i++) cout<<ans[i];
	cout<<" ";
}
void quaylui(int i, int j, int k){
	if(i==N && j==N){
		in(k); OK=1; return;
	}
	if(i<N && A[i+1][j]==1){
		ans[k]=='D';
		quaylui(i+1,j,k+1);
	}
	if(j<N && A[i][j+1]==1){
		ans[k]='R';
		quaylui(i,j+1,k+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>N; OK=0;
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++){
				cin>>A[i][j];
			}
		}
		if(A[1][1]==0) cout<<"-1"<<endl;
		else{
			OK=0;
			quaylui(1,1,1);
			if(!OK) cout<<"-1";
			cout<<endl;
		}
	}
}
