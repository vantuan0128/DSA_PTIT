/*
Cho một bản đồ kích thước N x M được mô tả bằng ma trận A[][].A[i][j] = 1 có nghĩa vị trí (i, j) là nổi trên biển. 2 vị trí (i, j) và (x, y) 
được coi là liền nhau nếu như nó có chung đỉnh hoặc chung cạnh. Một hòn đảo là một tập hợp các điểm (i, j) mà A[i][j] = 1 và có thể di chuyển giữa hai điểm 
bất kì trong đó.

Nhiệm vụ của bạn là hãy đếm số lượng đảo xuất hiện trên bản đồ.
Input:
1
5 5
1 1 0 0 0
0 1 0 0 1
1 0 0 1 1
0 0 0 0 0
1 0 1 0 1
Output:
5
*/
#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[1005][1005];
int check[1005][1005];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j) {
    check[i][j] = 1;
    for(int l = 0; l < 8; l++) {
        int i1 = i + dx[l];
        int j1 = j + dy[l];
        if(i1 >= 0 && i1 < n && j1 < m && j1 >=0 && a[i1][j1] == 1) {
            if(!check[i1][j1]) {
                dfs(i1,j1);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i = 0; i <n;i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for(int i = 0; i <n;i++) {
            for(int j = 0; j < m; j++) {
                if(!check[i][j] && a[i][j] == 1) {
                    ++cnt;
                    dfs(i,j);
                }
            }
        }
        cout << cnt << endl;
        memset(check, 0, sizeof(check));
    }
    return 0;
}
