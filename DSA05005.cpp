/*
Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất.
Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }
sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.
Input:
1
7
2 3 5 1 4 7 6
Output: 3
*/
#include <bits/stdc++.h>
using namespace std;
int n,a[1001],L[1001],ans;
void Qhd(){
	memset(L,0,sizeof(L));
	ans=0;
	for(int i=0; i<n; i++){
		L[i]=1;
		for(int j=0; j<i; j++){
			if(a[i]>=a[j]) L[i]=max(L[i],L[j]+1);
		}
		ans=max(ans,L[i]);
	}
	cout<<n-ans<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n ;i++) cin>>a[i];
		Qhd();
		
	}
	return 0;
}
