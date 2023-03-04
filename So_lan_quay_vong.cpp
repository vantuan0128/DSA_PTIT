#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+5];
        int pos;
        for(int i = 0; i< n;i++) {
            cin >> a[i];
            if(a[i] == 1) {
                pos = i;
            }
        }
        cout << pos << endl;
    }
    return 0;
}
