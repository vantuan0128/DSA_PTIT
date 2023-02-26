/*
Hôm nay là ngày 22/02/2022. Một ngày đặc biệt. Chỉ có hai chữ số là 0 và 2. Đồng thời viết xuôi viết ngược tám chữ số ta đều được cùng một kết quả.

Nhiệm vụ của bạn trong ngày đặc biệt này là hãy liệt kê hết tất cả các ngày hợp lệ chỉ có 2 chữ số 0 và 2.

Một số chú ý:

Luôn có đủ 8 chữ số của ngảy tháng năm và hai dấu gạch chéo.
Ngày và tháng có thể có chữ số 0 ở đầu nhưng với năm thì không được phép. Tức là ta chỉ tính các ngày bắt đầu từ năm 2000 trở về sau.

Bài toán không có dữ liệu vào. Bạn chỉ cần liệt kê kết quả gồm tất cả các ngày tháng hợp lệ. 
Coi dãy ký tự ngày tháng là một xâu ký tự. Hãy liệt kê theo đúng thứ tự từ điển tăng dần.
*/
#include <bits/stdc++.h>
using namespace std;
int n=8;
int a[100];
void in(){
	if( !(a[1]==0&&a[2]==0) && !(a[3]==1) && !(a[3]==0&&a[4]==0) && !(a[5]==0)){
	for(int i=1;i<=n;i++){
		if(a[i]==0) cout<<"0";
		else cout<<"2";
		if(i==2||i==4) cout<<"/";
	}
	cout<<endl;
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==8) in();
		else ql(i+1);
	}
}
int main(){
	ql(1);
	return 0;
}
