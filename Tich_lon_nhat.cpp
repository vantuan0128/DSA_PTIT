#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,greater<int>());
	long max1,max2,max3,max4;
	max1=max(a[0]*a[1],a[0]*a[1]*a[2]);
	max2=max(max1,(long)a[n-1]*a[n-2]);
	max3=max(max2,(long)a[n-1]*a[n-2]*a[0]);
	max4=max(max3,(long)a[n-1]*a[0]*a[1]);
	cout<<(long)max4<<endl;
	return 0;
} 

