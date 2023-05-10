/*
Cho dãy số A[] có N phần tử là các số nguyên dương khác nhau từng đôi một.
Hãy sắp xếp dãy theo thứ tự giảm dần, sau đó liệt kê tất cả các dãy con (đúng thứ tự trước sau) của A[] có tổng các phần tử là số lẻ.
Các dãy con được liệt kê theo thứ tự từ điển tăng dần.
Input:
1
4
2 3 4 5
Output:
3
3 2
4 3
4 3 2
5
5 2
5 4
5 4 2
*/
#include <bits/stdc++.h>
using namespace std;

int n,a[30],k,X[30];

vector <vector<int>> res;

void Try(int i){
	for(int j = X[i-1]+1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k){
			int sum = 0;
			for(int i=1; i<=k; i++) sum += a[X[i]];
			if(sum % 2 == 1){
				vector <int> v;
				for(int i=k; i>=1; i--){
					v.push_back(a[X[i]]);
				}
				res.push_back(v);
			}
		}
		else Try(i+1); 
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		for(int i=1; i<=n; i++){
			k = i;
			Try(1);
		}
		sort(res.begin(),res.end());
		if(res.size() != 0){
			for(int i=0; i<res.size(); i++){
				for(int j=0; j<res[i].size(); j++){
					cout<<res[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else continue;
		res.clear();
	}
	return 0;
}
