/*
Cho mảng X[] gồm n phần tử và mảng Y[] gồm m phần tử. 
Hãy đếm số các cặp x^y > y^x, trong đó x€X[] và y€Y[]. Ví dụ X[] = {2, 1, 6 }, Y[] = {1, 5} ta có kết quả là 3 cặp (2, 1), (2, 5), (6, 1).
Input:
1
3 2
2 1 6
1 5
Output: 3
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int bs(int a[], int n, int x) {
    int res = -1;
    int l = 0, r = n- 1;
    while(l <= r) {
        int m = (l+r)/2;
        if(a[m] > x) {
            res = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int a[n+5], b[m+5];
        for(int i = 0; i< n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i< m; i++) {
            cin >> b[i];
        }
        ll cnt = 0;
        sort(a, a + n);
        sort(b, b+m);
        for(int i = 0; i< n; i++) {
            if(a[i] == 0) {
                cnt += 0;
            }
            else if(a[i] == 1) {
                for(int j = 0; j <m; j++) {
                    if(b[j] == 0) {
                        ++cnt;
                    }
                }
            }
            else if(a[i] == 2) {
                int tmp = 0;
                for(int j = 0; j < m; j++) {
                    if(b[j] == 3 || b[j] == 4 || b[j] == 2) {
                        ++tmp;
                    }
                    if(b[j] > 4) break;
                }
                cnt += m - tmp;
            }
            else if(a[i] == 3) {
                int tmp = 0;
                for(int j = 0; j < m; j++) {
                    if(b[j] == 3) {
                        ++tmp;
                    }
                    if(b[j] > 3) {
                        break;
                    }
                }
                cnt += m - tmp;
            }
            else if(a[i] == 4) {
                int tmp = 0;
                for(int j = 0; j < m; j++) {
                    if(b[j] == 2 || b[j] == 4 || b[j] == 3) {
                        ++tmp;
                    }
                }
                cnt += m - tmp;
            }
            else {
                for(int j = 0; j < m; j++) {
                    if(b[j] == 0 || b[j] == 1) {
                        ++cnt;
                    }
                    else {
                        break;
                    }
                }
                int d = bs(b, m, a[i]);
                if(d != -1) {
                    cnt += m - d;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
