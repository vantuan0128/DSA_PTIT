/*
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy đưa ra tất cả các cạnh cầu của đồ thị?
Input:
1
5 5
1 2 
1 3
2 3
2 5
3 4
Output:
2 5 3 4
*/
#include <bits/stdc++.h>
using namespace std;


int n,k;
vector<int> v[1005];
int check[1005] = {0};

void reset() {
    for(int i = 0; i < 1005; i++) {
        v[i].clear();
    }
    memset(check, 0, sizeof(check));
}

void BFS(int x) {
    queue<int> q;
    q.push(x);
    check[x] = 1;
    while(!q.empty()) {
        int tmp = q.front(); q.pop();
        for(int h : v[tmp]) {
            if(check[h] == 0) {
                q.push(h);
                check[h] = 1;
            }
        }
    }
}

int TPLT() {
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(check[i] == 0) {
            ++ans;
            BFS(i);
        }
    }
    return ans;
}

int cnt = 0;

void canh_cau(int canh, int res, vector<pair<int,int>> tmp) {
    for(int i = 0; i < k; i++) {
        if(i != canh) {
            v[tmp[i].first].push_back(tmp[i].second);
            v[tmp[i].second].push_back(tmp[i].first);
        } 
    }
    int ans = TPLT();
    if(ans > res) cout << tmp[canh].first << " " << tmp[canh].second << " ";
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector<pair<int,int>> tmp;
        for(int i = 1; i <= k; i++) {
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
            tmp.push_back({x,y});
        }
        int res = TPLT();
        for(int i = 0; i < k; i++) {
            reset();
            canh_cau(i, res, tmp);
        }
        reset();
        cout << endl;
    }
}
