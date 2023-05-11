/*
Cho dãy ký tự S chỉ bao gồm các ký tự I hoặc D. Ký tự I được hiểu là tăng (Increasing) ký tự D được hiểu là giảm (Decreasing). 
Sử dụng các số từ 1 đến 9, hãy đưa ra số nhỏ nhất được đoán nhận từ S. Chú ý, các số không được phép lặp lại. Dưới đây là một số ví dụ mẫu:
A[] = “I”    : số tăng nhỏ nhất là 12.
A[] = “D”    : số giảm nhỏ nhất là 21
A[] =”DD”    : số giảm nhỏ nhất là 321
A[] = “DDIDDIID”: số thỏa mãn 321654798
Input:
4
I
D
DD
DDIDDIID
Output:
12
21
321
321654798
*/
#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t; cin>>t;
	string s;
	while(t--) {
		cin >> s;
		int m = s.size();
		stack <int> t;
		for(int i = 0; i <= m; i++){
			if(s[i] == 'I'|| i == m){
				cout << i+1;
				while(!t.empty()){
					cout << t.top();
					t.pop();
				}
			}
			else if (s[i] == 'D') t.push( i + 1 );
		}
		cout << endl;
	}
	return 0;
}
