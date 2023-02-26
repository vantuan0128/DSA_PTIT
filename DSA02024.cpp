/*
Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau từng đôi một. 
Hãy liệt kê tất cả các dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất tăng dần.

Dãy con tạo được bằng cách lấy ra các phần tử trong dãy a[] nhưng vẫn giữ nguyên thứ tự ban đầu.

Coi mỗi dãy con như một xâu ký tự với các phần tử cách nhau một khoảng trống, hãy liệt kê theo thứ tự từ điển.
Input:
4
6 3 7 11
Output:
3 11
3 7
3 7 11
6 11
6 7
6 7 11
7 11
*/
#include <bits/stdc++.h>
using namespace std;
int n,a[20];
string k;
vector<int> x;
vector<string> v;
vector<vector<int>> ans;
void ql(int i){
	for(int j=i+1;j<=n;j++){
		if(a[j]>a[i]){
			x.push_back(a[j]);
			if(x.size()>1) ans.push_back(x);
			ql(j);
			x.erase(x.end()-1,x.end());
		}
	}
}
int main(){
	cin>>n;
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ql(0);
	for(int i=0;i<ans.size();i++){
		k="";
		for(int j=0; j<ans[i].size();j++){
			k+=to_string(ans[i][j]);
			k+=" ";
		}
		v.push_back(k);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}
