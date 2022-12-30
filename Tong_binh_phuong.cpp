#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD=1e9+7;
int F[10005];
void tinh(){
	int i,j;
	for(int i=1;i<=10000;i++){
		F[i]=i;
		for(j=1;j<=sqrt(i);j++){
			F[i]=min(F[i],F[i-j*j]+1);
		}
	}
}

int main(){
	int n,t; cin>>t;
	tinh();
	while(t--){
		cin>>n;
		cout<<F[n]<<endl;
	}
	return 0;
}
