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
