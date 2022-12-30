#include <bits/stdc++.h>
using namespace std;
int first_pos(int a[], int n, int x){
	int res=-1; int l=0, r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1;
		}
		else if(a[m]<x){
			l=m+1;
		}
		else r=m-1;
	}
	return res;
}

int last_pos(int a[], int n, int x){
	int res=-1; int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			l=m+1;
		}
		else if(a[m]<x){
			l=m+1;
		}
		else r=m-1;
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		 for(int i=0;i<n;i++){
		 	cin>>a[i];
		}
	int l=first_pos(a,n,0);
	int r=last_pos(a,n,0);
	cout<<r-l+1<<endl;
	}
}

