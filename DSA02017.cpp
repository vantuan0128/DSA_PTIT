/*
Cho một bàn cờ 8 x 8, mỗi ô có một giá trị A[i][j] nhất định (0 ≤ A[i][j] ≤ 100), tương ứng với điểm số đạt được nếu như bạn đặt một quân cờ vào đó.
Nhiệm vụ của bạn là đặt 8 quân hậu lên bàn cờ, sao cho không có 2 quân nào ăn nhau, và số điểm đạt được là lớn nhất.
Input:
1
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
Output:
260
*/

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int X[100],xuoi[100],nguoc[100],cot[100],dem=0;
int A[102][102];
ll ans=0;
void check(){
	ll tong = 0;
	for(int i=1; i<=8; i++){
		tong += X[i];
	}
	ans = max(ans,tong);
}
void Try(int i){
	for(int j=1; j<=8; j++){
		if(cot[j] == 0 && xuoi[i-j+8] == 0 && nguoc[i+j-1] == 0){
			X[i]=A[i][j];
			cot[j] = xuoi[i-j+8] = nguoc[i+j-1] = 1;
			if(i == 8) check();
			else Try(i+1);
			cot[j] = xuoi[i-j+8] = nguoc[i+j-1] = 0;
		} 
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t ; cin>>t;
	while(t--){
		for(int i=1; i<=8; i++){
			for(int j=1; j<=8; j++){
				cin>>A[i][j];
			}
		}
		Try(1);
		cout<<ans<<endl;
		ans = 0;
	}
	return 0;
}
