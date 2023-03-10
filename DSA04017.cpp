/*
Cho hai mảng đã được sắp xếp A[] và B[] gồm N và N-1 phần tử. 
Các phần tử của mảng A[] chỉ khác mảng B[] một phần tử duy nhất. Hãy tìm vị trí của phần tử khác nhau giữa A[] và B[].
Input:
2
7
2 4 6 8 9 10 12
2 4 6 8 10 12
6
3 5 7 9 11 13
3 5 7 11 13
Output: 
5
4
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int binary_search(ll a[],ll b[],int n){
	int t=n;
	int l=0,r=n-1;
	while(l<=r){
		int	m=(l+r)/2;
		if(a[m]==b[m]) l=m+1;
		else{
			t=m;
			r=m-1;
		}
	}
	return t+1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		ll a[n],b[n-1];
		for(ll &x : a) cin>>x;
		for(int i=0;i<n-1;i++) cin>>b[i];
		int i=0,j=0;
		cout<<binary_search(a,b,n)<<endl;
	}
	return 0;
}
