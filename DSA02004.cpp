/*
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. 
Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.
Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.
Input:
3
4
1 0 0 0
1 1 0 1
0 1 0 0
0 1 1 1
4
1 0 0 0
1 1 0 1
1 1 0 0
0 1 1 1
5
1 0 0 0 0
1 1 1 1 1
1 1 1 0 1
0 0 0 0 1
0 0 0 0 1
Output:
DRDDRR
DDRDRR DRDDRR
DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD
*/

#include <bits/stdc++.h>
using namespace std;

int n,a[100][100],ok;
string s;

int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};

string path="DLRU";

void Try(int i, int j, string s){
	if(i==n && j==n){
		ok=1;
		cout<<s<<' ';
	}
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&j1>=1&&i1<=n&&j1<=n&&a[i1][j1]==1){
			a[i1][j1]=0;
			s+=path[k];
			Try(i1,j1,s);
			a[i1][j1]=1;
			s.pop_back(); //Loai bo 1 ki tu cuoi cung
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		s="";
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		if(a[1][1]==0||a[n][n]==0){
			cout<<"-1"<<endl;
		}
		else{
			ok=0;
			a[1][1]=0;
			Try(1,1,s);
			if(ok==0) cout<<"-1"<<endl;
			else cout<<endl;
		}
	}
	return 0;
}
