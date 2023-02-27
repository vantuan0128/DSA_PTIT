/*
Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy tìm số lần xuất hiện số X trong mảng. Nếu số lần xuất hiện số x trong mảng là 0 hãy đưa ra -1.
Input:
2
7 2
1 1 2 2 2 2 3

7 4
1 1 2 2 2 2 3
Output:
4
-1
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
		int dem=0;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==x) dem++;
		}
		if(dem!=0) cout<<dem<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
