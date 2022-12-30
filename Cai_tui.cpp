#include <bits/stdc++.h>
using namespace std;
//Trong luong tui phu thuoc 2 yeu to: So do vat dang xet
// va trong luong con lai cai tui
//F[i][j]: Tong gia tri lon nhat xet tu vat 1 toi vat i, trong luong chua qua j
int F[1005][1005],N,M,A[1005],C[1005];
int qhd(){
	int i,j;
	memset(F,0,sizeof(F));
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			F[i][j]=F[i-1][j]; //ko chon do thu i
			if(j>=A[i]){
				F[i][j]=max(F[i][j],F[i-1][j-A[i]]+C[i]);
			}
		}
	}
	return F[N][M];
}
main(){
	int t,i;
	cin>>t;
	while(t--){
		cin>>N>>M; //N: so do vat, M: The tich tui
		for(i=1;i<=N;i++) cin>>A[i]; //The tich do vat
		for(i=1;i<=N;i++) cin>>C[i]; //Gia tri do vat
		cout<<qhd()<<endl;
	}
	return 0;
}
