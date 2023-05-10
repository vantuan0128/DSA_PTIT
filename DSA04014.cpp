/*
Cho mảng A[] gồm N phần tử. Ta gọi cặp nghịch thế của mảng A[] là số các cặp i, j sao cho i<j và A[i]>A[j].
Đối với mảng đã được sắp xếp thì số cặp nghịch thế bằng 0. 
Mảng đã sắp theo thứ tự giảm dần có số đảo ngược cực đại. Nhiệm vụ của bạn là hãy đưa ra số cặp nghịch thế của mảng A[] gồm N phần tử.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤107; 1≤A[i]≤1018.
Input:
2
5
2 4 1 3 5
5
5 4 3 2 1
Output:
3
10
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
const int MOD=1e9+7;

ll merge(int a[], int l ,int r, int m){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	ll cnt=0;
	int i=0,j=0;
	while(i<x.size() && j<y.size()){
		if(x[i]>y[j]){
			cnt += x.size()-i;
			a[l++]=y[j++];
		}
		else{
			a[l++]=x[i++];
		}
	}
	while(i<x.size()) a[l++]=x[i++];
	while(j<y.size()) a[l++]=y[j++];
	return cnt;
}

ll mergesort(int a[], int l, int r){
	ll ans=0;
	if(l<r){
		int m=(l+r)/2;
		ans += mergesort(a,l,m);
		ans += mergesort(a,m+1,r);
		ans += merge(a,l,r,m);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<mergesort(a,0,n-1)<<endl;
	}	
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
long long ghep(long long a[],int l, int m, int r){
	int n1 = m-l+1, n2=r-m, i, j, k;
	long long L[n1], R[n2];
	for(i=0;i<n1;i++) L[i]=a[l+i];
	for(i=0;i<n2;i++) R[i]=a[m+i+1];
	long long kq=0; 
	i=0; j=0; k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]) a[k++]=L[i++];
		else {
			a[k++]=R[j++];
			kq=kq+n1-i;
		}
	}
	while(i<n1) a[k++]=L[i++];
	while(j<n2) a[k++]=R[j++];
	return kq;
}
long long xuly(long long a[], int l, int r){
	long long kq=0;
	if(l < r){
		int m=(l+r)/2;
		kq=kq+ xuly(a,l,m);
		kq=kq+ xuly(a,m+1,r);
		kq=kq+ ghep(a,l,m,r);
	}
	return kq;
}
main(){
	int t,n,i; cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(i=0;i<n;i++) cin>>a[i];
		cout<<xuly(a,0,n-1)<<endl;
	}
}

*/
