/*
Cho 5 số nguyên dương A, B, C, D, E. Bạn có thể hoán vị các phần tử cho nhau, hãy đặt các dấu biểu thức +, -, * sao cho biểu thức sau đúng:

[[[A o(1) B] o(2) C] o(3) D] o(4) E = 23

Trong đó: o(1) … o(4) là các phép toán +, -, *.
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 5 số nguyên dương A, B, C, D, E có giá trị không vượt quá 100.
Input:
3
1 1 1 1 1
1 2 3 4 5
2 3 5 7 11
Output:
NO
YES
YES
*/
#include <bits/stdc++.h>
using namespace std;
int number[6], OK, chuaxet[6];
void quaylui(int i, int giatri){
	if(i==5 && giatri==23){
		OK=1; return;
	}
	for(int j=0;j<5;j++){
		if(chuaxet[j]){
			chuaxet[j] = 0;
			quaylui(i+1,giatri + number[j]);
			quaylui(i+1,giatri * number[j]);
			quaylui(i+1,giatri - number[j]);
			chuaxet[j] = 1;
		}
	}
}
main(){
	int t,i;
	cin>>t;
	while(t--){
		for(i=0;i<5;i++) cin>>number[i];
		OK = 0;
		for(i=0;i<5;i++){
			chuaxet[i] = 0;
			quaylui(1,number[i]);
			chuaxet[i] = 1;
		}
		if(OK) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
