#include <bits/stdc++.h>
using namespace std;
char c;
int n,dem,x[20],m;
bool check(){
	int max1=0,max2=0,dem1=0,dem2=0;
	for(int i=1;i<=n;i++){
		if(x[i]==m){
			dem1++;
			if(dem1>max1){
				max1=dem1;
			}
			dem2=0;
		}
		else{
			dem2++;
			if(dem2>max2){
				max2=dem2;
			}
			dem1=0;
		}
	}
	if(max1>=5&&max1>max2){
		return true;
	}
	return false;
}
void in(){
	if(check()){
		for(int i=1;i<=n;i++){
			if(x[i]==0) cout<<"O";
			else cout<<"X";
		}
		cout<<endl;
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n) in();
		else{
			ql(i+1);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		cin>>n>>c;
		if(c =='O') m = 0;
			else m = 1;
		ql(1);
	}
}
