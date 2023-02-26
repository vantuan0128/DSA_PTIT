/*
Cho hai số nguyên dương N và K. Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần tử của 1, 2, .., N. 
Ví dụ với N=5, K=3 ta có 10 tập con của 1, 2, 3, 4, 5 như sau: {1, 2, 3}, {1, 2, 4},{1, 2, 5},{1, 3, 4},{1, 3, 5},{1, 4, 5},{2, 3, 4},{2, 3, 5},{2, 4, 5},{3, 4, 5}.
*/
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
