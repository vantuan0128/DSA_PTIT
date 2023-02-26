/*
Cho danh sách liên kết đơn lưu giữ các số nguyên được quản lý bởi con trỏ First. 
Viết chương trình con lọc tất cả các phần tử có giá trị trùng nhau trong danh sách liên kết đơn First, chỉ để lại 1 phần tử đại diện cho nhóm trùng. 
Sau khi lọc xong, liệt kê các phần tử  trong danh sách liên kết đơn First.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> res;
int main(){
	int n; cin>>n;
	int f[100005];
	memset(f,0,sizeof(f));
	for(int i=0;i<n;i++){
		int x; cin>>x;
		res.push_back(x);
		f[x]++;
	}
	for(int i=0;i<res.size();i++){
		if(f[res[i]]>0){
			cout<<res[i]<<" ";
			f[res[i]]=0;
		}
	}
}
