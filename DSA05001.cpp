/*
Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này (các phần tử không nhất thiết phải liên tiếp nhau).
Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.
Input:
2
AGGTAB
GXTXAYB
AA
BB
Output:
4
0
*/
#include <bits/stdc++.h>
using namespace std;
int C[1005][1005];
int qhd(string s1, string s2){
	memset(C,0,sizeof(C));
	int i,j,n=s1.length(),m=s2.length();
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(s1[i-1]==s2[j-1]) C[i][j]=C[i-1][j-1]+1;
			else C[i][j]=max(C[i-1][j],C[i][j-1]);
		}
	}
	return C[n][m];
}
main(){
	int t; string s1,s2;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		cout<<qhd(s1,s2)<<endl;
	}
}
