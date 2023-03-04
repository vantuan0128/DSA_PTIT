/*
Cho dãy số A[] gồm có N phần tử. Bạn cần tìm 2 vị trí i, j sao cho j-i lớn nhất và A[j] > A[i].
Input:
3
9
34 8 10 3 2 80 30 33 1
6
1 2 3 4 5 6
6
6 5 4 3 2 1
Output:
6
5
-1
*/
#include<bits/stdc++.h>

using namespace std;

long long bs(long long a[], long long l, long long r, long long x) {
    long long res = -1;
    while(l <= r) {
        int m = (l+r)/2;
        if(a[m] < x) {
            res = m;
            l = m +1;
        }
        else {
            r = m-1;
        }
    }
    return res;
}

int solve(int a[], int n) {
    int res = -1;
    for(int i = 0; i < n; i ++) {
        for(int j = n-1; j > i; j--) {
            if(a[j] > a[i]) {
                res = max(res, j - i);
            }
        }
    }
    return res;
}

int findMaxDistance(int A[], int N) {
    int i = 0, j = 0;
    for (int k = 1; k < N; k++) {
        if (A[k] > A[j]) {
            j = k;
            if (A[j] > A[i]) {
                i = j;
            }
        }
    }
    return j - i;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end());
        int res = -1, MIN = v[0].second, k = v[0].first;
        for(int i = 1; i < n; i++) {
            if(v[i].first > k) {
                res = max(res, v[i].second - MIN);
            }
            if(MIN > v[i].second) {
                k = v[i].first;
                MIN = v[i].second;
            }

        }
        cout << res;
        cout << endl;
    }
    return 0;
}
