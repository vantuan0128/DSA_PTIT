#include <iostream>
using namespace std;

void ThKe(int a[],int n, int k){
	int i;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
	while(1){
		for(int i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<" ";
		i=k;
		while(i>=1&&a[i]>=n-k+i){
			i--;
		}
		if(i==0) return;
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int a[1000],n,k;
		cin>>n>>k;
		ThKe(a,n,k);
		cout<<endl;
	}
	return 0;
}
