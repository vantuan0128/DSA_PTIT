/*
Cho một bàn cờ vua có kích thước n * n, ta biết ràng quân hậu có thể di chuyển theo chiều ngang, dọc, chéo. 
Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ sao cho với 2 quân hậu bất kì, chúng không “ăn” nhau.

Input: Dòng đầu ghi số bộ test T (T<5). Mỗi bộ test ghi một số nguyên dương n duy nhất (không quá 10)

Output:  Ghi kết quả mỗi bộ test trên một dòng. Số cách đặt quân hậu.

Input: 
1
4
Output:
2
*/
#include <bits/stdc++.h>
using namespace std;
int n, A[11], B[11]={0}, Xuoi[21], Nguoc[21],dem;
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(!B[j]&&!Xuoi[i-j+n]&&!Nguoc[i+j-1]){
			A[i]=j;
			B[j]=1; Xuoi[i-j+n]=1; Nguoc[i+j-1]=1;
			if(i==n) dem++;
			else quaylui(i+1);
			B[j]=0; Xuoi[i-j+n]=0; Nguoc[i+j-1]=0;
		}
	}
}
main(){
	int t,i; cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<=10;i++){
			A[i]=0; B[i]=0;
		}
		for(i=0;i<=20;i++){
			Xuoi[i]=0; Nguoc[i]=0;
		}
		dem=0;
		quaylui(1);	
		cout<<dem<<endl;
	}
}
