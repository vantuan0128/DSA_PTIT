#include <bits/stdc++.h>

using namespace std;

using ll =long long;
const int MOD = 1000007;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll sum = 0;
		for(int i = 1; i <= n; i++) {
			sum += ((n / i) * i) % MOD;
			sum %= MOD;
		}
		cout << sum << endl;
	}
	return 0;
}
/*
Given a number N, find the sum of all products x*y such that N/x = y (Integer Division). Since, the sum can be very large, please output this modulo 1000007.

Input
The first line of input file contains an integer T, the number of test cases to follow. Each of the next T lines contain an integer N.

Output
Output T lines containing answer to corresponding test case.

Example
Input:
3
2
4
6
Output:
4
15
33
Constraints:
1 = T = 100
1 = N = 106
Sample Explanation:
Case #1:

2 / 1 = 2
2 / 2 = 1
Answer = 1 * 2 + 2 * 1 = 4
*/
