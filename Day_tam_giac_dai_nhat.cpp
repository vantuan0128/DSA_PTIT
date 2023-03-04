#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0 ; i< n ; i++) {
            cin >> a[i];
        }
        int b[n+5] , c[n+5];
        b[0] = 1; c[n-1] = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] > a[i-1]) {
                b[i] = b[i-1] + 1;
            }
            else {
                b[i] = 1;
            }
        }
        for(int i = n-2; i >=0; i--) {
            if(a[i] > a[i+1] ) {
                c[i] = c[i+1] + 1;
            }
            else {
                c[i] = 1;
            }
        } 
        int res = INT_MIN;
        for(int i = 0; i< n; i++) {
            res = max(res, b[i] + c[i] -1);
        }
        cout << res << endl;
    }
    return 0;
}
