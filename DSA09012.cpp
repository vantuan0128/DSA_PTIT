/*
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy đưa ra tất cả các đỉnh trụ của đồ thị?
Input:
1
5 5
1 2 1 3 2 3 2 5 3 4
Output:
2 3
*/
#include<bits/stdc++.h>

using namespace std;

int n, k;
int check[10005];
set<int> v[10005];

void reset() {
    for(int i = 1; i <=n;i++) {
        v[i].clear();
    }
    memset(check, 0, sizeof(check));
}

void dfs(int x) {
    check[x] = 1;
    for(int h : v[x]) {
        if(check[h] == 0) {
            dfs(h);
        }
    }
}

int TPLT() {
    int cnt = 0;
    for(int i = 1; i <=n ;i++) {
        if(check[i] == 0) {
            ++cnt;
            dfs(i);
        }
    }
    return cnt;
}

void dinh_tru(int dinh, int res) {
    check[dinh] = 1;
    int ans = TPLT();
    if(ans > res) cout << dinh << " ";
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 0; i < k; i++) {
            int x,y;
            cin >> x >> y;
            v[x].insert(y);
            v[y].insert(x);
        }
        int res = TPLT();
        for(int i = 1; i <=n;i++) {
            memset(check, 0, sizeof(check));
            dinh_tru(i, res);
        }
        reset();
        cout << endl;
    }
}
