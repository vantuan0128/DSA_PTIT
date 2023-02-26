/*
Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N. Ví dụ với N = 3 ta có kết quả: 123, 132, 213, 231, 312, 321.
*/
#include <iostream>
using namespace std;

void Hvke(int a[],int n){
		int i;
	for(i=1;i<=n;i++){
		a[i]=i;
	}
		while(1){
			for(i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<" ";
		i=n-1;
		while(i>=1&&a[i]>a[i+1]){
			i--;
			}
		if(i==0) return;
		int k=n;
		while(a[k]<a[i]){
			k--;
		}
			int tmp=a[i];
			a[i]=a[k];
			a[k]=tmp;
		int l=i+1; int r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}			
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[1000];
		Hvke(a,n);
		cout<<endl;
	}
	return 0;
}
