/*
Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị. Ví dụ 2/3 = 1/2  + 1/6. 
Cho phân số nguyên dương P/Q bất kỳ (P < Q), hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị với số hạng tử là ít nhất.
Đưa ra đáp án tìm được trên 1 dòng, theo dạng “1/a + 1/b + …”
Input:
2
2 3
1 3
Output:
1/2 + 1/6 

1/3
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void Try(ll tu,ll mau){
	if(mau%tu == 0){
		cout<<"1/"<<mau/tu<<endl;
		return;
	}
	ll c=mau/tu+1; //Lam tron len
	cout<<"1/"<<c<<" + ";
	ll mc=mau*c;
	ll tumoi=c*tu-1*mau;
	Try(tumoi,mc);
}

int main(){
	int t; cin>>t;
	while(t--){
		ll a,b; cin>>a>>b;
		Try(a,b);
	}
	return 0;
}
