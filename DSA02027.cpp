/*
Cho n thành phố đánh số từ 1 đến n và các tuyến đường giao thông hai chiều giữa chúng, mạng lưới giao thông này được cho bởi mảng C[1…n, 1…n] 
ở đây C[i][j] = C[j][i] là chi phí đi đoạn đường trực tiếp từ thành phố i đến thành phố j.

Một người du lịch xuất phát từ thành phố 1, muốn đi thăm tất cả các thành phố còn lại mỗi thành phố đúng 1 lần và cuối cùng quay lại thành phố 1. 
Hãy chỉ ra chi phí ít nhất mà người đó phải bỏ ra.

Dữ liệu vào: Dòng đầu tiên là số nguyên n – số thành phố (n ≤ 15); n dòng sau, mỗi dòng chứa n số nguyên thể hiện cho mảng 2 chiều C.

Kết quả: Chi phí mà người đó phải bỏ ra.
Input:
4
0 20 35 10
20 0 90 50
35 90 0 12
10 50 12 0
Output:
117
*/
#include <bits/stdc++.h>
using namespace std;
int c[20][20], n, x[20], fopt = 1e9, xopt[20], cmin=1e9, cost=0;
bool chuaxet[20];
void Try(int i){
	int j;
	for(j=2;j<=n;j++){
		if(chuaxet[j]){
			x[i]=j; chuaxet[j]=false;
			cost+=c[x[i-1]][x[i]];
			if(i==n){
				int v=cost+ c[x[n]][x[1]]; //tu tp cuoi ve tp1
				fopt=min(fopt,v);
			}
			else if(cost+cmin*(n-i+1) < fopt){
				Try(i+1);
			}
			cost-=c[x[i-1]][x[i]];
			chuaxet[j]=true;
		}
	}
}
main(){
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>c[i][j];
			if(i!=j) cmin=min(cmin, c[i][j]); //tim GTNN
		}
	}
	for(i=1;i<=n;i++){ x[i]=i; chuaxet[i]=true;	}
	Try(2);
	cout<<fopt<<endl;
}
