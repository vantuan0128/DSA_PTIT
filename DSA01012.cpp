/*
Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray. Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít. 
Ví dụ với n=3 ta có 2^3 mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. Hãy viết chương trình liệt kê các mã Gray có độ dài n.
Input:
2
3
4
Output:
000 001 011 010 110 111 101 100
0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 1110 1010 1011 1001 1000
*/
#include<bits/stdc++.h>
using namespace std;
int n,x[20];
void in(){
	cout<<x[1];
	for(int i=2;i<=n;i++){
		if(x[i]!=x[i-1]) cout<<1;
		else cout<<0;
	}
	cout<<" ";
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n) in();
		else ql(i+1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		cin>>n;
		ql(1);
		cout<<endl;
	}
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> v;
        v.push_back("0");
        v.push_back("1");
        for(int i = 2; i <=n;i++) {
            int l = v.size();
            for(int j = l - 1; j >= 0; j--) {
                v.push_back(v[j]);
            }
            for(int j = 0; j < l; j++) {
                v[j] = "0" + v[j];
            }
            for(int j = l; j < v.size(); j++) {
                v[j] = "1" + v[j];
            }
        }
        for(auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
