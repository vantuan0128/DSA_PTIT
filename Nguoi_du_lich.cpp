#include <bits/stdc++.h>
using namespace std;
int c[20][20], n, x[20], fopt = 1e9, xopt[20], cmin=1e9, cost=0;
bool chuaxet[20];
void Try(int i){
	int j;
	for(j=2;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j; chuaxet[j]=false;
			cost+=c[x[i-1]][x[i]];
			if(i==n){
				int v=cost+ c[x[n]][x[1]]; //tu tp cuoi ve tp1
				fopt=min(fopt,v);
			}
			else if(cost+cmin*(n-i+1) < fopt){
				Try(i+1);
			}
			cost-=c[x[i-1]][x[i]];
			chuaxet[j]=true;
		}
	}
}
main(){
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>c[i][j];
			if(i!=j) cmin=min(cmin, c[i][j]); //tim GTNN
		}
	}
	for(i=1;i<=n;i++){ x[i]=i; chuaxet[i]=true;	}
	Try(2);
	cout<<fopt<<endl;
}
