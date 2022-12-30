#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int m,n,p,q;
	cin>>m>>n>>p>>q;
	int a=abs(m-p);
	int b=abs(n-q);
	if(a==b) cout<<a;
	else cout<<min(a,b)+abs(a-b);
	return 0;
}
