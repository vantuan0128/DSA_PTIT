#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100000];

bool check(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		cnt+=a[i];
	}
	return cnt == m;
}

void SinhXauAB(int a[], int n, int m){
	for(int i=1;i<=n;i++){
		a[i]=0; //cau hinh dau tien
	}
	while(1){
		if(check()){
			for(int i=1;i<=n;i++){
				cout<<a[i]; //in cau hinh dau tien
			}
			cout<<endl;
		}
		int i=n;
		while(i>=1&&a[i]==1){
			a[i]=0; //tim vi tri lon nhat ma tai do a[i]=0
			i--;
		}
		if(i==0) return;
		else a[i]= 1; //thay doi gia tri tu 0->1
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		SinhXauAB(a,n,m);
	}
	return 0;
}
