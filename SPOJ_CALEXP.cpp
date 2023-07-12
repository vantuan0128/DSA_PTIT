#include <bits/stdc++.h>

using namespace std;
long MOD = 1e9 + 7;

long long exp(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    long long x = exp(a, b / 2);
    if (b % 2 == 0) return ((x % MOD) * (x % MOD)) % MOD;
    else return ((a % MOD) * (((x % MOD) * (x % MOD)) % MOD)) % MOD;
}

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        int a, b;
        cin >> a >> b;
        cout << "#" << k << " " << exp(a, b) << endl;
    }
    return 0;
}

/*
Input:
2
2 3
3 3

Output:
#1 8
#2 27
*/
