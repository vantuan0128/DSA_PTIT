/*
Cho xâu ký tự S. Nhiệm vụ của bạn là tìm số phép loại bỏ ít nhất các ký tự trong S để S trở thành xâu đối xứng. 
Chú ý, phép loại bỏ phải bảo toàn tính trước sau của các ký tự trong S.
Input:
2
aebcbda
geeksforgeeks
Output:
2
8
*/
#include<iostream>
#include <cstring>
using namespace std;
int test(string s, int n) {
	int M[100][100];
	memset(M, 0,sizeof(M));
	for (int i = 0; i < n; i++)M[i][i] = 1;
	for (int i = n - 2; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			if (s[i] == s[j])M[i][j] +=M[i+1][j-1]+2;
			else {
				M[i][j] = max(M[i + 1][j] , M[i][j - 1]);
			}
		}
	}
	return n - M[0][n - 1];
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << test(s, s.length()) << endl;
	}
}

/*
#include<iostream>
#include <cstring>
using namespace std;
int qhd(string s) {
	int n=s.length();
	int M[n+1][n+1];
	memset(M, 0,sizeof(M));
	for (int i = n - 2; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			if (s[i] == s[j]) M[i][j] =M[i+1][j-1];
			else {
				M[i][j] = min(M[i + 1][j] , M[i][j - 1])+1;
			}
		}
	}
	return  M[0][n - 1];
}
int main() {
	int t; cin >> t;
	string s;
	while (t--) {
		string s; cin >> s;
		cout << qhd(s) << endl;
	}
}
*/
