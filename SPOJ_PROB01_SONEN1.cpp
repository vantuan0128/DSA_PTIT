#include <bits/stdc++.h>

using namespace std;

int xuly(int n) {
    if (n < 10) return n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum < 10) return sum;
    else return xuly(sum);
}

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        int n;
        cin >> n;
        int ans = xuly(n);
        cout << "#" << k << " " << ans << endl;
    }
    return 0;
}

/*
Input:
3

43

111

57871


Output:
#1 7

#2 3

#3 1
*/
