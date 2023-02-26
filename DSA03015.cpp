/*
Giả sử bạn là một người nghèo trong địa phương của bạn. Địa phương của bạn có duy nhất một cửa hàng bán lương thực. 
Cửa hàng của bạn mở cửa tất cả các ngày trong tuần ngoại trừ chủ nhật. Cho bộ ba số N, S, M thỏa mãn ràng buộc sau:

N : số đơn vị lương thực nhiều nhất bạn có thể mua trong ngày.
S : số lượng ngày bạn cần được sử dụng lương thực để tồn tại.
M : số đơn vị lương thực cần có mỗi ngày để bạn tồn tại.
Đưa ra số ngày ít nhất bạn có thể mua lương thực để tồn tại hoặc đưa ra -1 nếu bạn bị chết đói.
Input:
2
16 10 2
20 10 30
Output:
2
-1
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,s,m; cin>>n>>s>>m;
		int ok=0;
		int res=0, need=s*m; //du trong s ngay
		for(int i=1;i<=s;i++){
			if(i%7==0) continue; //chu nhat khong ban
			else{
				res++;
				if(res*n>=need){
					cout<<res<<endl; ok=1;
					break;
				}
			}
		}
		if(ok==0) cout<<"-1"<<endl;
	}
	return 0;
}
