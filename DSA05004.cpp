/*
Cho một dãy số nguyên gồm N phần tử A[1], A[2], ... A[N]. 
Biết rằng dãy con tăng là 1 dãy A[i1],... A[ik]
thỏa mãn i1 < i2 < ... < ik và A[i1] < A[i2] < .. < A[ik].
Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử? 
Input:
6
1 2 5 4 6 2
Output:4
*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
ll len[1001],ans=-1e9+7;
int a[1001],n;

void Qhd(){
	for(int i=0; i<n; i++){
		len[i]=1;
		for(int j=0; j<i; j++){
			//co the cho them i vao day con tang dai nhat ket thuc chi so j
			if(a[i]>a[j]) len[i]=max(len[i],len[j]+1);
		}
		ans=max(ans,len[i]);
	}
	cout<<ans<<endl;
}

void nhap(){
	cin>>n;
	for(int i=0 ; i<n; i++) cin>>a[i];
}

int main(){
	nhap();
	Qhd();
	return 0;
}
