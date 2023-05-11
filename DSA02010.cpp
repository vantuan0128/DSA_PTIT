/*
Cho mảng A[] gồm N số nguyên dương phân biệt và số X. Nhiệm vụ của bạn là tìm phép tổ hợp các số trong mảng A[] có tổng bằng X.
Các số trong mảng A[] có thể được sử dụng nhiều lần. Mỗi tổ hợp các số của mảng A[] được in ra theo thứ tự không giảm các số. 
Ví dụ với A[] = {2, 4, 6, 8}, X = 8 ta có các tổ hợp các số như sau:
[2, 2, 2, 2], [2, 2, 4], [2, 6], [4, 4], [8].
Đưa ra kết quả mỗi test theo từng dòng. Mỗi đường tổ hợp được bao bởi cặp ký tự [, ]. Đưa ra -1 nếu không có tổ hợp nào thỏa mãn yêu cầu bài toán.
Input:
1
4  8
2  4  6  8
Output:
[2 2 2 2] [2 2 4] [2 6] [4 4] [8]
*/
#include<bits/stdc++.h>
using namespace std;
int n,x,a[25],c[25],ok;
void in(int n){
	cout<<"[";
	for(int i=1;i<n;i++){
		cout<<c[i]<<" ";
	}
	cout<<c[n]<<"]";
}
void quaylui(int i,int sum){
	int j;
	for(j=1;j<=n;j++){
		if(a[j] >= c[i-1] && sum + a[j] <=x){
		c[i] = a[j]; sum = sum+a[j];
		if(sum == x){
			in(i); ok=1;
		}
		else quaylui(i+1,sum);
		sum = sum -a[j];
	}
}
}
int main(){
	int t,i;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=1;i<=n;i++) cin>>a[i];
		c[0]=0;
		ok=0;
		quaylui(1,0);
		if(ok==0) cout<<-1;
		cout<<endl;
	}
}
