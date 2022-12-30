#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int m,n,p;
		int i=0,j=0,k=0,ok=0;
		cin>>m>>n>>p;
		long long a[m],b[n],c[p];
		nhap(a,m);
		nhap(b,n);
		nhap(c,p);
		while(i<m&&j<n&&k<p){
			if(a[i]==b[j]&&b[j]==c[k]){
				cout<<a[i]<<" "; ok=1;
				i++;j++;k++;
			}
			else if(a[i]<b[j]) i++;
				else if(b[j]<c[k]) j++;
					else k++;
		}
		if(ok==0) cout<<"-1";
		cout<<endl;
	}
	return 0;
}
