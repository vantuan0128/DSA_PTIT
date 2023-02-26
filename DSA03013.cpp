/*
Cho xâu ký tự S bao gồm các ký tự và số D. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các 
ký tự trong S để tất cả các ký tự giống nhau đều có khoảng cách là D hay không?
Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.
Input:
2
2
ABB
2
AAA
Output:
1
-1
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int d; cin >> d;
		string s; cin >> s;
		int a['Z'+1]={0};
		int n=s.size();
		for (int i=0; i<n; i++) a[s[i]]++;
		int m=*max_element(a,a+'Z');
		if ((m-1)*d<n) cout << 1 << endl;
		else cout << -1 << endl;
	}
	return 0;
}
