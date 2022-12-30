#include <bits/stdc++.h>
using namespace std;
int n,s,A[30]; int kq=1e9;
void quaylui(int i, int sum, int x){
	if(sum > s || x > kq) return;
	if(i==n){
		if(sum==s) kq=min(kq,x);
		return;
	}
	quaylui(i+1,sum,x);
	quaylui(i+1,sum+A[i],x+1);
}
int main(){
	cin>>n>>s;
	for(int i=0;i<n;i++) cin>>A[i];
	quaylui(0,0,0);
	if(kq==1e9) cout<<"-1";
	else cout<<kq;
}
