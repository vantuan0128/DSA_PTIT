/*
Một xâu nhị phân độ dài n được gọi là thuận nghịch hay đối xứng nếu đảo ngược xâu nhị phân đó ta vẫn nhận được chính nó. 
Cho số tự nhiên n (n nhập từ bàn phím). Hãy viết chương trình liệt kê tất cả các xâu nhị phân thuận nghịch có độ dài n.  
Hai phần tử khác nhau của xâu thuận nghịch được ghi cách nhau một khoảng trống.
*/
#include <bits/stdc++.h>
using namespace std;
int n;
int a[100000];

bool check(){
	int i=1,j=n;
	while(i<j){
		if(a[i]!=a[j]) return 0;
		i++;j--;
	}
	return 1;
}

void SinhXauAB(int a[], int n){
	for(int i=1;i<=n;i++){
		a[i]=0; //cau hinh dau tien
	}
	while(1){
		if(check()){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" "; //in cau hinh dau tien
			}
			cout<<endl;
		}
		int i=n;
		while(i>=1&&a[i]==1){
			a[i]=0; //tim vi tri lon nhat ma tai do a[i]=0
			i--;
		}
		if(i==0) return;
		else a[i]= 1; //thay doi gia tri tu 0->1
	}
}
int main(){
		cin>>n;
		SinhXauAB(a,n);
	return 0;
}
