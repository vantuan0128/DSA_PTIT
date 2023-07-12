#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
    float k = (int) sqrt(n);
    if (int(k * k) == n) return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    for (int x = 1; x <= t; x++) {
        set < int > s;
        int m, n;
        cin >> m >> n;
        bool ok = false;
        for (int i = m; i <= n; i++) {
            if (check(i)) {
                s.insert(i);
                ok = true;
            }
        }
        if (!ok) printf("#%d NO NUMBER\n", x);
        else {
            cout << "#" << x << " ";
            for (int x: s) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

/*
Example
Input:
1
1 10

Output:
#1 1 4 9
*/
