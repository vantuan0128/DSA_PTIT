#include <bits/stdc++.h>
using namespace std;
vector<int> v;
set<int> s;
void ThKe(int a[],int n, int k){
	int i;
	for(int i=1;i<=k;i++){
		a[i]=i; //to hop dau tien
	}
	while(1){
		for(int i=1;i<=k;i++){
			cout<<v[a[i]-1]<<" "; //vector bat dau tu 0, mang bat dau tu 1
		}
		cout<<endl;
		i=k;
		while(i>=1&&a[i]>=n-k+i){
			i--;
		}
		if(i==0) return;
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i; //Sinh to hop ke tiep
		}
	}
}

int main(){
	int a[10000],n,k;
	cin>>n>>k;
		for(int i=1;i<=n;i++){
			int x; cin>>x;
			s.insert(x); //loai bo phan tu trung nhau
		}
		for(auto it : s ){
			v.push_back(it); //day vao vector - co thu tu
			n=v.size();
		}
		ThKe(a,n,k);
	return 0;
}
