/*
Cho đồ thị có trọng số không âm G=<V, E> được biểu diễn dưới dạng danh sách cạnh trọng số. Hãy viết chương trình tìm 
đường đi ngắn nhất từ đỉnh uÎV đến tất cả các đỉnh còn lại trên đồ thị.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào hai ba số |V|, |E| tương ứng với số đỉnh và uÎV là đỉnh bắt đầu; 
|E| dòng tiếp theo mỗi dòng đưa vào bộ ba uÎV, vÎV, w tương ứng với một cạnh cùng với trọng số canh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra kết quả của mỗi test theo từng dòng. Kết quả mỗi test là trọng số đường đi ngắn nhất từ đỉnh u đến các đỉnh còn lại của đồ thị theo thứ tự tăng dần các đỉnh.
Input:
1
9  12 1
1  2   4
1  8   8
2  3   8
2  8   11
3  4   7
3  6   4
3  9   2
4  5   9
4  6  14
5  6  10
6  7  2
6  9  6
Output:
0 4 12 19 26 16 18 8 14 
*/
#include<bits/stdc++.h>

using namespace std;
int n, a[1005][1005], d[1005], e[1005], vs[1005];

void Dijkstra(int s) {
    for(int v = 1; v <= n; v++) {
        d[v] = a[s][v];
        e[v] = s;
    }
    d[s] = 0;
    e[s] = 0;
    vs[s] = 1;
    while(1) {
        int u = 0, min = INT_MAX;
        for(int v = 1; v <= n; v++) {
            if(vs[v] == 0 && d[v] < min) {
                u = v;
                min = d[v];
            }
        }
        if(u == 0) return;
        vs[u] = 1;
        for(int v = 1; v <=n; v++) {
            if(vs[v] == 0 && d[v] > d[u] + a[u][v]) {
                d[v] = d[u] + a[u][v];
                e[v] = u;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k,s;
        cin >> n >> k >> s;
        memset(a, 1e9 + 7, sizeof(a));
        memset(vs, 0, sizeof(vs));
        for(int i = 1; i <= k ; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            a[x][y] = min(a[x][y] , z);
            a[y][x] = min(a[y][x], z);
            a[i][i] = 0;
        }
        Dijkstra(s);
        for(int i = 1; i <=n ; i++) {
            cout << d[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
