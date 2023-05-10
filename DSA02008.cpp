/*
Cho ma trận vuông Ci,j cấp N (1<= i, j <= N<10) gồm N2 số tự nhiên và số tự nhiên K (các số trong ma trận không nhất thiết phải khác nhau và đều không quá 100, 
K không quá 104). Hãy viết chương trình lấy mỗi hàng, mỗi cột duy nhất một phần tử sao cho tổng các phần tử này đúng bằng K.
Dữ liệu vào: Dòng 1 ghi hai số N và K. N dòng tiếp theo ghi ma trận C. 
Input:
3 10
2 4 3
1 3 6
4 2 4
Output:
2
1 3 2
3 2 1
*/

#include <bits/stdc++.h>
using namespace std;
int OK = 0, n, A[15], C[15][15]={0},k,dem=0;
void xuly1(){
	int i,t=0;
	for(i=1;i<=n;i++) t=t+C[i][A[i]];
	if(t==k) dem++;
}
void xuly2(){
		int i,t=0;
	for(i=1;i<=n;i++) t=t+C[i][A[i]];
	if(t==k) {
		for(i=1;i<=n;i++) cout<<A[i]<<" ";
		cout<<endl;
	}
}
void sinh(){
	int i=n-1,j,t;
	while(A[i]>A[i+1]) i--;
	if(i==0) OK=1;
	else{
		j=n;
		while(A[j]<A[i]) j--;
		t=A[i]; A[i]=A[j]; A[j]=t;
		int d=i+1, c=n;
		while(d<c){
			t=A[d]; A[d]=A[c]; A[c]=t;
			d++;c--;
		}
	}
}
main(){
	int i,j;
	cin>>n>>k;
	for(int i=1;i<=n;i++) A[i]=i;
	for(int i=1;i<=n;i++) for(j=1;j<=n;j++) cin>>C[i][j];
	while(!OK){
		xuly1();
		sinh();
	}
	cout<<dem<<endl;
	OK=0;
	for(i=1;i<=n;i++) A[i]=i;
	while(!OK){
		xuly2();
		sinh();
	}
}

/*
#include <bits/stdc++.h>
using namespace std;
int n,k,a[100][100],X[100],used[100];
int ans=0;
vector <string> res;
void check1(){
	int tong=0;
	for(int i=1; i<=n; i++){
		tong+=a[i][X[i]];
	}
	if(tong == k) ans++;
}
void check2(){
	int tong=0;
	for(int i=1; i<=n; i++){
		tong += a[i][X[i]];
	}
	if(tong == k){
		string s="";
		for(int i=1; i<=n; i++){
			s+=to_string(X[i]);
			if(i!=n) s+=" ";
		}
		res.push_back(s);
	}
}
void ql(int i){
	for(int j = 1; j<=n; j++ ){
		if(!used[j]){
			used[j]=1;
			X[i]=j;
			if(i==n){
				check1(); check2();
			}
			else ql(i+1);
			used[j]=0;
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	ql(1);
	cout<<ans<<endl;
	for(string x : res){
		cout<<x<<endl;
	}
	return 0;
}
*/
