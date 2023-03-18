/*
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có đường đi Euler hay chu trình Euler hay không?


Đường đi Euler bắt đầu tại một đỉnh, và kết thúc tại một đỉnh khác.
Chu trình Euler bắt đầu tại một đỉnh, và kết thúc chu trình tại chính đỉnh đó.
Input:
2
6  10  
1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6 5 6
6 9  
1  2 1  3 2  3 2  4 2  5 3  4 3  5 4  5 4  6
Output:
2
1
*/
#include<bits/stdc++.h>

using namespace std;

int n,k;
set<int> v[1005];
vector<int> ec;
int check[1005];
int deg[1005];
int tplt;

void reset() {
    for(int i = 1; i <= n; i++) {
        v[i].clear();
    }
    memset(check, 0, sizeof(check));
    memset(deg, 0, sizeof(deg));
}

void dfs(int x) {
    check[x] = 1;
    for(int h : v[x]) {
        if(!check[h]) {
            dfs(h);
        }
    }
}

int TPLT() {
    int cnt = 0;
    for(int i = 1; i <=n ;i++) {
        if(!check[i]) {
            ++cnt;
            dfs(i);
        }
    }
    return cnt;
}

bool check_chu_trinh() {
    if(tplt != 1) {
        return false;
    }
    for(int i = 1; i <=n ;i++) {
        if(deg[i] % 2 == 1) {
            return false;
        }
    }
    return true;
}

bool check_duong_di() {
    if(tplt != 1) {
        return false; 
    }
    int cnt = 0;
    for(int i = 1; i <= n ;i++) {
        if(deg[i] % 2 == 1) {
            ++cnt;
        }
    }
    if(cnt != 2 && cnt != 0) {
        return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 0 ; i <k;i++) {
            int x,y;
            cin >> x >> y;
            v[x].insert(y);
            v[y].insert(x);
            deg[x]++;
            deg[y]++;
        }
        tplt = TPLT();
        if(check_chu_trinh()) {
            cout << 2 << endl;
        }
        else {
            if(check_duong_di()) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        reset();

    }
    return 0;
}
