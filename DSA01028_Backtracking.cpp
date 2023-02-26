/*
Cho dãy số A[] có N phần tử. Hãy liệt kê tất cả các tổ hợp chập K của tập các phần tử khác nhau trong A[].
Các tổ hợp cần liệt kê theo thứ tự từ điển (tức là trong mỗi tổ hợp thì giá trị từ nhỏ đến lớn, và tổ hợp sau lớn hơn tổ hợp trước).
*/
#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v;
int a[25];
void nhap(){
	cin>>n>>k;
	set<int> s;
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		s.insert(x); //loai bo ptu trung nhau
	}
	for(auto x : s){
		v.push_back(x); //day vao vector - co thu tu
		n=v.size(); //kich co vector: Chi so tu 0 -> size()-1
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<v[a[i]-1]<<" "; //vector bat dau tu chi so 0, mang bat dau tu 1
	}
	cout<<endl;
}
void ql(int i){ // quay lui to hop
	for(int j=a[i-1]+1;j<=n-k+i;j++){ //to hop bat dau tu 1 2...n-k+i
		a[i]=j;
		if(i==k) in();
		else ql(i+1);
	}
}
int main(){
	nhap();
	ql(1);
	return 0;
}
