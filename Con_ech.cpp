#include <bits/stdc++.h>
using namespace std;
int main(){
	long long F[55],n,t,i;
	F[0]=1;F[1]=1;F[2]=2; //F0 dung tai cho, F1 nhay tu F0 len, F2 nhay tu 0->2 hoac 1->2
	for(i=3;i<=50;i++) F[i]=F[i-1]+F[i-2]+F[i-3];
	cin>>t;
	while(t--){
		cin>>n;
		cout<<F[n]<<endl;
	}
}
