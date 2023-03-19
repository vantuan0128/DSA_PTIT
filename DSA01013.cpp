/*
Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến 
thể của mã nhị phân đó là mã Gray. Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít. 
Ví dụ với n=3 ta có 2^3 mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. 
Hãy viết chương trình chuyển đổi một xâu mã Gray X có độ dài n thành một xâu mã nhị phân.
Input:
2
01101
01011
Output:
01001
01101
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s,bin="";
		cin>>s;
		bin=s[0];
		for(int i=1;i<s.size();i++){
			int n=bin.size()-1;
			if(bin[n]!=s[i]) bin+="1";
			else bin+="0";
		}
		cout<<bin<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string s;
        cin >> s;
        string tmp = s;
        for(int i = 1; i < s.length(); i++) {
            if(s[i] == '1') {
                if(tmp[i-1] == '0') {
                    tmp[i] = '1';
                }
                else {
                    tmp[i] = '0';
                }
            }
            else {
                tmp[i] = tmp[i-1];
            }
        }
        cout << tmp << endl;
    }
    return 0;
}

