/*
Một đồ thị N đỉnh là một cây, nếu như nó có đúng N-1 cạnh và giữa 2 đỉnh bất kì, chỉ tồn tại duy nhất 1 đường đi giữa chúng.
Cho một đồ thị N đỉnh và N-1 cạnh, hãy kiểm tra đồ thị đã cho có phải là một cây hay không?
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 1000).
N-1 dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.

Input:
2
4
1 2
1 3
2 4
4
1 2
1 3
2 3
Output:
YES
NO
*/
#include<bits/stdc++.h>

using namespace std;

int n,k;
vector<int> v[1005];
int check[1005];
void reset() {
    for(int i = 1; i <=n ;i++) {
        v[i].clear();
    }
    memset(check, 0, sizeof(check));
}

void dfs2(int x) {
    check[x] = 1;
    for(int h : v[x]) {
        if(!check[h]) {
            dfs2(h);
        }
    }
} 

void solve() {
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs2(1);
    for(int i = 1; i <=n ;i++) {
        if(!check[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    reset();
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
