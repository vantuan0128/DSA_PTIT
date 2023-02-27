/*
Cho mảng A[] gồm n số nguyên khác nhau. Hãy đưa ra các phần tử của mảng theo khuôn dạng lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ 2, …
Ví dụ với A[] = {9, 7, 12, 8, 6, 5} ta đưa ra : 12, 5, 9, 6, 8, 7.
Input:
2
7
7 1 2 3 4 5 6
8
1 6 9 4 3 7 8 2
Output:
7 1 6 2 5 3 4
9 1 8 2 7 3 6 4
*/
#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
void in(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(i<n-1-i)	cout<<a[n-1-i]<<" "<<a[i]<<" ";
		if(i==n-1-i) cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		in(a,n);
	}
	return 0;
}
