#include <bits/stdc++.h>
using namespace std;
int n,k,a[100][100],X[100],used[100];
int ans=0;
vector <string> res;
void check1(){
	int tong=0;
	for(int i=1; i<=n; i++){
		tong+=a[i][X[i]];
	}
	if(tong == k) ans++;
}
void check2(){
	int tong=0;
	for(int i=1; i<=n; i++){
		tong += a[i][X[i]];
	}
	if(tong == k){
		string s="";
		for(int i=1; i<=n; i++){
			s+=to_string(X[i]);
			if(i!=n) s+=" ";
		}
		res.push_back(s);
	}
}
void ql(int i){
	for(int j = 1; j<=n; j++ ){
		if(!used[j]){
			used[j]=1;
			X[i]=j;
			if(i==n){
				check1(); check2();
			}
			else ql(i+1);
			used[j]=0;
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	ql(1);
	cout<<ans<<endl;
	for(string x : res){
		cout<<x<<endl;
	}
	return 0;
}
