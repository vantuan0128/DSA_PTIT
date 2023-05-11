/*
Cho đơn đồ thị vô hướng liên thông G = (V, E) gồm N đỉnh và M cạnh, các đỉnh được đánh số từ 1 tới N và các cạnh được đánh số từ 1 tới M.

Có Q truy vấn, mỗi truy vấn yêu cầu bạn tìm đường đi ngắn nhất giữa đỉnh X[i] tới Y[i].
Input:
5 6
1 2 6
1 3 7
2 4 8
3 4 9
3 5 1
4 5 2
3
1 5
2 5
4 3
Output:
8
10
3
*/
#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[1005][1005];
const long long INF = 1e9;

void  floyd() {
    for(int k = 1; k <=n ; k++) {
        for(int i = 1; i <=n ; i++) {
            for(int j = 1; j <= n ; j++) {
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <=n ; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) a[i][j] = 0;
            else {
                a[i][j] = INF;
            }
        }
    }
    for(int i = 1; i <= m; i++) {
        int x,y,z;
        cin >> x >> y >> z;
        a[x][y] = z;
        a[y][x] = z;
    }
    int q;
    cin >> q;
    floyd();
    while(q--) {
        int s, t;
        cin >> s >> t;
        cout << a[s][t] << endl;
    }
    return 0;
}
