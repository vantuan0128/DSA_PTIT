/*
Cho dãy A[] gồm N số tự nhiên khác nhau và số tự nhiên K. 
Hãy viết chương trình liệt kê tất cả các dãy con của dãy số A[] sao cho tổng các phần tử trong dãy con đó đúng bằng K. 
Dữ liệu vào trên bàn phím (n=5, K=50), 5 số dòng thứ 2 là các phần tử dãy A:
 5                      50       
 5                      10                    15                    20                    25   
 Out:
   10                    15                    25

   5                     20                    25

   5                     10                    15                    20
*/
#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000],b[1000];
vector<vector<int>> res;
void out(int n){
	vector<int> temp;
	for(int i = 1; i < n; i++) temp.push_back(b[i]);
	res.push_back(temp);
}
void Try(int i, int sum, int cur){
	if(sum == k) {
		out(i);
		return ;
	}
	if(sum > k) return;
	for(int j = cur; j <= n;j++){
		sum += a[j];
		b[i] = a[j];
		if(sum <= k) Try(i+1,sum,j+1);
		sum -= a[j];
	}
}
int main(){
	cin>>n>>k; 
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	Try(1,0,1);
	for(int i = res.size()-1;i >= 0;i--){
		for(int j = 0; j < res[i].size();j++) cout << res[i][j] << " ";
		cout << endl;
	}
	cout << res.size() << endl;
	cout << endl;
	return 0;
}
