#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[100000];
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			int min_pos=i;
			for(int j=i+1;j<n;j++){
				if(a[j]<a[min_pos]){
					min_pos=j;
				}
			}
			if(i!=min_pos){
				swap(a[i],a[min_pos]);
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
