/*
Cho dãy số a[] có n phần tử, đánh số từ 1 đến n. Hãy sắp xếp các phần tử ở vị trí lẻ theo thứ tự tăng dần, các phần tử ở vị trí chẵn theo thứ tự giảm dần.
Input:
4
1 2 3 4
Output:
1 4 3 2
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n; cin>>n;
	long long i,m,c,a[n],b[n],x=0,y=0;
	for(int i=1;i<=n;i++){
		cin>>m;
		if(i%2==0) {
			a[x]=m; x++; //vi tri chan
		}
		else{
			b[y]=m;y++; //vi tri le
		}
	}
	sort(a,a+x);
	sort(b,b+y);
	c=0;
	for(i=0;i<n;i++){
		if(i%2==0){
			cout<<b[c]<<" ";c++;
		}
		else{
			cout<<a[x-1]<<" ";x--;
		}
	}
	return 0;
}
