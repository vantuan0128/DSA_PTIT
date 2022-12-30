#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	 cin>>t;
	 while(t--){
	 	int a[100000];
	 	int n,m,i;
	 	cin>>n>>m;
	 	for(i=0;i<n+m;i++){
			cin>>a[i];
	 }
	 sort(a,a+n+m);
	 for(i=0;i<n+m;i++){
	 	cout<<a[i]<<' ';
	 }
	 cout<<endl;
	}
	return 0;
}
