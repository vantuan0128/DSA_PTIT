/*
Kỳ thi ICPC có K đội của PTIT tham gia và đội tuyển đang rất đau đầu không biết chọn các cái tên như thế nào cho các đội. 
Yêu cầu phải đảm bảo tên không có khoảng trống và không được trùng nhau. 
Sau khi thảo luận, có N cái tên được đề xuất (có thể bị trùng nhau). Với K<15 và 4 < N < 30.

Hãy liệt kê tất cả danh sách các tổ hợp K cái tên khác nhau có thể được tạo ra theo thứ tự từ điển.
Input: 6 2

DONG TAY NAM BAC TAY BAC
Output:
BAC DONG

BAC NAM

BAC TAY

DONG NAM

DONG TAY

NAM TAY
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
set<string> s;
vector<string> v;
void nhap(){
	cin>>n>>k;
	set<string> s;
	for(int i=1;i<=n;i++){
		string x; cin>>x;
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
