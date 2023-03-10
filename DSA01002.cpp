/*
Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. 
Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X[]. Ví dụ N=5, K=3, X[] ={2, 3, 4} thì tập con tiếp theo của X[] là {2, 3, 5}.
*/
#include <iostream>
using namespace std;

void TapconKt(int a[],int n, int k){
	int i;
	while(1){
		i=k;
		while(i>=1&&a[i]>=n-k+i){
			i--;
		}
		if(i==0){
			for(int i=1;i<=k;i++){
				a[i]=i;
				cout<<a[i]<<" ";
			}
			cout<<endl;
			break;
		}
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
		for(int i=1;i<=k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		break;
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int a[1000],n,k;
		do
		cin>>n>>k;
		while(n<k);
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		TapconKt(a,n,k);
	}
	return 0;
}
