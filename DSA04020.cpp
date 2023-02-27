/*
Cho dãy số A[] gồm có N phần tử đã được sắp xếp tăng dần và số K.
Nhiệm vụ của bạn là kiểm tra xem số K có xuất hiện trong dãy số hay không. Nếu có hãy in ra vị trí trong dãy A[], nếu không in ra “NO”.
Input:
2
5 3
1 2 3 4 5
6 5
0 1 2 3 9 10
Output:
3
NO
*/
#include <bits/stdc++.h>
using namespace std;
int xuly(int a[],int l,int r,int k){
	if(l>r) return 0;
	int m=(l+r)/2;
	if(a[m]==k) return m+1;
	else if(a[m]<k){
		return xuly(a,m+1,r,k);
	}
	else return xuly(a,l,m-1,k);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int l=0, r=n-1;
		if(xuly(a,l,r,k)==0) cout<<"NO"<<endl;
		else cout<<xuly(a,l,r,k)<<endl;
	}
	return 0;
}
