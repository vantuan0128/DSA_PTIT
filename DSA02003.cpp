/*
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. 
Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:
Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
Input:
2
4
1  0  0  0
1  1  0  1 
0  1  0  0 
1  1  1  1

5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
Output:
DRDDRR
DDRDRRDR DDRDRRRD DRDDRRDR DRDDRRRD DRRRRDDD
*/
#include <bits/stdc++.h>
using namespace std;

int n,a[100][100],ok;

int dx[2]={1,0};
int dy[2]={0,1};
string s="DR";

void Try(int i, int j, string res){
	if (i==n && j==n){
		cout << res << " ";
		ok=1;
	}
	for (int k=0; k<2; k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if (i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]){
			a[i1][j1]=0;
			Try(i1,j1,res+s[k]);
			a[i1][j1]=1;
		}
	}
}

int main(){
	int t; cin >> t;
	while (t--){
		cin >> n;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=n; j++){
				cin >> a[i][j];
			}
		}
		ok=0;
		if (a[1][1] && a[n][n]){
			a[1][1]=0;
			Try(1,1,"");
		}
		if (ok) cout << endl;
		else cout << -1 << endl;
	}
	return 0;
}
