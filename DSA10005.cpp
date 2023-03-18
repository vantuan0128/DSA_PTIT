/*
Cho đồ thị có hướng liên thông yếu G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có chu trình Euler hay không?
Đưa ra 1, 0 kết quả mỗi test theo từng dòng tương ứng với đồ thị có chu trình Euler và trường hợp không tồn tại đáp án.
Input:
2
6  10  
1 2 2 4 2 5 3 1 3 2 4 3 4 5 5 3 5 6 6 4
3 3
1 2 2 3 1 3
Output:
1
0
*/
#include<bits/stdc++.h>

using namespace std;

int n,k;
set<int> v[1005];
vector<int> ec;
int check[1005];
int deg_vao[1005];
int deg_ra[1005];
int tplt;

void reset() {
    for(int i = 1; i <= n; i++) {
        v[i].clear();
    }
    memset(check, 0, sizeof(check));
    memset(deg_vao, 0, sizeof(deg_vao));
    memset(deg_ra, 0, sizeof(deg_ra));
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
        if(deg_vao[i] != deg_ra[i]) {
            return false;
        }
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
            deg_ra[x]++;
            deg_vao[y]++;
        }
        tplt = TPLT();
        if(check_chu_trinh()) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
        reset();

    }
    return 0;
}
