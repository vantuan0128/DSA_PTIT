/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?
Input:
1
6 9  
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 4
Output:
YES
*/
#include<bits/stdc++.h>

using namespace std;

int n,k;
set<int> v[1005];
int ok[1005];
void reset() {
    for(int i = 1; i <=n ;i++) {
        v[i].clear();
    }
    memset(ok, 0, sizeof(ok));
}

bool dfs(int s) {
    ok[s] = 1;
    for(int x : v[s]) {
        if(!ok[x]) {
            if(dfs(x)) return true;
        }
        else if(ok[x] == 1) return true;
    }
    ok[s] = 2;
    return false;
}

void solve() {
    for(int i = 1; i <=n ;i++) {
        if(!ok[i]) {
            if(dfs(i)) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            v[x].insert(y);
        }
        solve();
        reset();
    }
    return 0;
}
