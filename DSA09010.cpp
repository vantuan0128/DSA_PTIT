/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có liên thông mạnh hay không?
Đưa ra “YES”, hoặc “NO” theo từng dòng tương ứng với test là liên thông mạnh hoặc không liên thông mạnh.
Input:
1
6 9 
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 3
Output:
YES
*/
#include<bits/stdc++.h>

using namespace std;

int n,k;
set<int> v[1005];
set<int> r[1005];
vector<int> ec;
int check[1005];
int p[1005];
void reset() {
    for(int i = 1; i <= n; i++) {
        v[i].clear();
    }
    memset(check, 0, sizeof(check));
    memset(p, 0, sizeof(p));
}

void bfs1(int x) {
    queue<int> q;
    q.push(x);
    check[x] == 1;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        for(int h : v[top]) {
            if(!check[h]) {
                q.push(h);
                check[h] = 1;
            }
        }
    }
}

void bfs2(int x) {
    queue<int> q;
    q.push(x);
    check[x] == 1;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        for(int h : r[top]) {
            if(!check[h]) {
                q.push(h);
                check[h] = 1;
            }
        }
    }
}


int main() {
    int T;
    cin >> T;
    while(T--) {
        cin >> n >> k;
        for(int i = 0 ; i <k;i++) {
            int x,y;
            cin >> x >> y;
            v[x].insert(y);
            r[y].insert(x);
        }
        int cnt1 = 0, cnt2 = 0;
        for(int i = 1; i <=n; i++) {
            if(check[i] == 0) {
                ++cnt1;
                bfs1(i);
            }
        }
        memset(check,0,sizeof(check));
        for(int i = 1; i <=n; i++) {
            if(check[i] == 0) {
                ++cnt2;
                bfs2(i);
            }
        }
        if(cnt1 == 1 && cnt2 == 1) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
        reset();
    }
    return 0;
}
