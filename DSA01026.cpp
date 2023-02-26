/*
Một xâu ký tự số chỉ bao gồm các chữ số 6 và 8 sẽ được gọi là “phát lộc” nếu thỏa mãn các điều kiện sau:
Độ dài xâu ít nhất là 6
Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6
Không có 2 chữ số 8 nào ở cạnh nhau
Không có nhiều hơn 3 chữ số 6 ở cạnh nhau.
*/
#include <bits/stdc++.h>
using namespace std;
int n,a[50];
int Check(){
	if(n<6) return 0;
	if(a[1]==0||a[n]==1) return 0;
	for(int i=1;i<=n-1;i++){
		if(a[i]==1 && a[i+1]==1) return 0;
	}
	for(int i=1;i<=n-3;i++){
		if(a[i]==0 && a[i+1]==0 && a[i+2]==0 &&a[i+3]==0) return 0;
	}
	return 1;
}
void in(){
	if(Check()==1){
		for(int i=1;i<=n;i++){
			if(a[i]==0) cout<<"6";
			else cout<<"8";
		}
		cout<<endl;
	}
}
void quaylui(int i){
	int j;
	for(j=0;j<=1;j++){
		a[i]=j;
		if(i == n) { 
			in();
		}
		else quaylui(i+1);
	}
}
int main(){
	cin>>n;
	quaylui(1);
	return 0;
}
