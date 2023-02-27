/*
Cho số tự nhiên N. Hãy tìm cặp số nguyên tố đầu tiên có tổng là N. Nếu không tồn tại cặp số nguyên tố có tổng bằng N, hãy đưa ra -1.
Input:
2
4
8
Output:
2 2
2 5
*/
#include<bits/stdc++.h>

using namespace std;

int F[1000005];

void solve() {
    for(int i = 0; i <= 1000000; i++) {
        F[i] = 1;
    }
    F[0] = 0;
    F[1] = 0;
    for(int i = 2; i <= 1000; i++) {
        if(F[i]) {
            for(int j = i*i; j <= 1000000; j+=i) {
                F[j] = 0;
            }
        }
    }
}

int main() {
    solve();
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >> n;
        int ok = 0;
        for(int i = 2; i <= n; i++) {
            if(F[i] && F[n-i]) {
                ok = 1;
                cout << i << " " << n-i << endl;
                break;
            }
        }
        if(ok == 0) {
            cout << -1 << endl;
        }
    }
    return 0;
}
