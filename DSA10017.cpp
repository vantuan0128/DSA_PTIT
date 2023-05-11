/*
Cho đồ thị có trọng số G=<V, E> được biểu diễn dưới dạng danh sách cạnh trọng số âm hoặc dương. Hãy viết chương trình xác định xem đồ thị có chu trình âm hay không.
Đưa ra 1 hoặc 0 theo từng dòng của mỗi test tương ứng với đồ thị có hoặc không có chu trình âm.
Input:
2
3  3
1  2 -1
2  3  4
3  1 -2
3  3
1  2 -1
2  3  2
3  1 -2
Output:
 0
 1
*/
#include<bits/stdc++.h>

using namespace std;

int n, a[1005][1005], d[1005], e[1005], vs[1005];

void Dijkstra(int s) {
    for(int i = 1; i <= n ; i++) {
        d[i] = a[s][i];
        e[i] = s;
    }
    d[s] = 0;
    e[s] = 0;
    vs[s] = 1;
    while(1) {
        int u = 0, min = INT_MAX;
        for(int i = 1; i <= n ; i++) {
            if(d[i] < min && vs[i] == 0) {
                u = i;
                min = d[i];
            }
        }
        if(u == 0) {
            return;
        }
        vs[u] = 1;
        for(int i = 1; i <=n ; i++) {
            if(vs[i] == 0 && d[i] > d[u] + a[u][i]) {
                d[i] = d[u] + a[u][i];
                e[i] = u;
            }
        }
    }
}

const int INF = 1e9 + 7;

int Bellman_Ford(int s) {
    for(int i = 1; i <= n ; i++) {
        d[i] = a[s][i];
        e[i] = s;
    }
    d[s] = 0;
    e[s] = 0;
    int ok = 0;
    for(int i = 1; i <= n -1; i++) {
        ok = 1;
        for(int v = 1; v <= n; v++) {
                for(int u = 1; u <= n; u++) {
                    if((a[u][v] != INF) && (d[v] > d[u] + a[u][v])) {
                        d[v] = d[u] + a[u][v];
                        e[v] = u;
                        ok = 0;
                    }

                }
        }
        if(ok == 1) break;
    }
    if(ok == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k,s;
        cin >> n >> k;
        memset(a, INF, sizeof(a));
        memset(vs, 0, sizeof(vs));
        for(int i = 1; i <= k ; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            a[x][y] = min(a[x][y] , z);
            // a[y][x] = min(a[y][x], z);
            a[i][i] = 0;
        }
        cout << Bellman_Ford(1) << endl;
    }
    return 0;
}
