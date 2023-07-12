#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long x){
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0) return false;
    }
    return true;
}

int main(){
    int T;
    cin >> T;
    long m, n;
    for (int tc=1; tc <= T; tc++){
        cin >> m >> n;
        for (long i = m; i <= n; i++){
            if (is_prime(i)) cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}

/*
Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

Input
The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 10000000, n-m<=10000) separated by a space.

Output
For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by an empty line.

Example
Input:
2
1 10
3 5

Output:
2
3
5
7

3
5
*/
