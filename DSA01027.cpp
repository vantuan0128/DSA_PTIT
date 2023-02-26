/*
Cho dãy số A[] có N phần tử là các số nguyên dương khác nhau từng đôi một. 
Hãy liệt kê tất cả các hoán vị của dãy số A[] theo thứ tự tăng dần, tức là hoán vị đầu tiên có giá trị tăng dần từ trái qua phải, 
hoán vị cuối cùng giảm dần từ trái qua phải.
Input:
3
88 77 99
Output:
77 88 99
77 99 88
88 77 99
88 99 77
99 77 88
99 88 77
*/
#include <bits/stdc++.h>
using namespace std;
int n, A[20], B[20]={0},a[10000];
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[A[i]]<<" ";
	}
	cout<<endl;
}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(!B[j]){
			A[i]=j; B[j]=1;
			if(i==n) in();
			else quaylui(i+1);
			B[j]=0;
		}
	}
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	quaylui(1);	
}
