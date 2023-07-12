#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        set < int > se;
        int n, x, y;
        cin >> n >> x >> y;
        for (int i = 2; i < n; i++) {
            if (i % x == 0 && i % y != 0) se.insert(i);
        }
        for (int x: se) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
	Print all integers ai such that ai is divisible by x and not divisible by y, where 1 < ai < n < 100000.
	
	Input
	First, you are given t (t < 100) - the number of test cases. In each of the following t lines, 3 integers: n x y.
	
	You might assume also that x < n and x is not divisible by y.
	
	Output
	In each of the following t lines, numbers requested in the problem description in the separated by a single space in ascending order.
	
	Example
	Input:
	2
	7 2 4
	35 5 12
	Output:
	2 6
	5 10 15 20 25 30
*/
