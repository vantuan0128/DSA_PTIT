#include <bits/stdc++.h>
using namespace std;
int a[10]={1,2,5,10,20,50,100,200,500,1000};
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int dem=0,x;
		for(int i=9;i>=0;i--){
			x=n/a[i];
			dem+=x;
			n=n-x*a[i];
		}
		cout<<dem<<endl;
	}
	return 0;
}
