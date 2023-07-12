#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 2, -1, -2, 1, 2, -1, -2};
const int dy[] = {2, 1, 2, 1, -2, -1, -2, -1};

struct Point {
    int X, Y;
};

int mark[1005][1005];
vector < Point > Q(1005), K(1005), P(1005);
int m, n;

void Pawns() {
    for (auto u: K) {
        mark[u.X][u.Y] = 0;
    }
    for (auto u: P) {
        mark[u.X][u.Y] = 0;
    }
}

void Knights() {
    for (auto u: K) {
        mark[u.X][u.Y] = 0;
        for (int k = 0; k < 8; k++) {
            int i = u.X + dx[k], j = u.Y + dy[k];
            if (i >= 1 && j >= 1 && i <= m && j <= n) {
                mark[i][j] = 0;
            }
        }
    }
}

void Queens() {
    for (auto u: Q) {
        //Tren
        mark[u.X][u.Y] = 0;
        for (int i = u.X - 1; i >= 1; i--) {
            if (mark[i][u.Y] == 0) break;
            mark[i][u.Y] = 0;
        }
        //Duoi
        for (int i = u.X + 1; i <= m; i++) {
            if (mark[i][u.Y] == 0) break;
            mark[i][u.Y] = 0;
        }
        //Phai
        for (int i = u.Y + 1; i <= n; i++) {
            if (mark[u.X][i] == 0) break;
            mark[u.X][i] = 0;
        }
        //Trai
        for (int i = u.Y - 1; i >= 1; i--) {
            if (mark[u.X][i] == 0) break;
            mark[u.X][i] = 0;
        }
        //Cheo tren trai
        for (int i = u.X - 1, j = u.Y - 1; i >= 1 && j >= 1; i--, j--) {
            if (mark[i][j] == 0) break;
            mark[i][j] = 0;
        }
        //Cheo tren phai
        for (int i = u.X - 1, j = u.Y + 1; i >= 1 && j <= n; i--, j++) {
            if (mark[i][j] == 0) break;
            mark[i][j] = 0;
        }
        //Cheo duoi trai
        for (int i = u.X + 1, j = u.Y - 1; i <= m && j >= 1; i++, j--) {
            if (mark[i][j] == 0) break;
            mark[i][j] = 0;
        }
        //Cheo duoi phai
        for (int i = u.X + 1, j = u.Y + 1; i <= m && j <= n; i++, j++) {
            if (mark[i][j] == 0) break;
            mark[i][j] = 0;
        }
    }
}

int main() {
    int test = 1;
    while (true) {
        cin >> m >> n;
        if (m == 0 && n == 0) break;

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                mark[i][j] = 1;
            }
        }

        Q.clear();
        K.clear();
        P.clear();

        int q;
        cin >> q;
        for (int i = 1; i <= q; i++) {
            Point u;
            cin >> u.X >> u.Y;
            Q.push_back(u);
        }

        int k;
        cin >> k;
        for (int i = 1; i <= k; i++) {
            Point u;
            cin >> u.X >> u.Y;
            K.push_back(u);
        }

        int p;
        cin >> p;
        for (int i = 1; i <= p; i++) {
            Point u;
            cin >> u.X >> u.Y;
            P.push_back(u);
        }

        Pawns();
        Queens();
        Knights();

        //        for(int i = 1; i <= m; i++){
        //        	for(int j=  1; j <= n; j++){
        //        		cout<<mark[i][j]<<" ";
        //			}
        //			cout<<endl;
        //		}

        int cnt = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (mark[i][j] == 1) cnt++;
            }
        }
        printf("Board %d has %d safe squares.\n", test++, cnt);
    }
    return 0;
}

/*
4 4
2 1 4 2 4
1 1 2
1 2 3
2 3
1 1 2
1 1 1
0
1000 1000
1 3 3
0
0
0 0

Output:
Board 1 has 6 safe squares.
Board 2 has 0 safe squares.
Board 3 has 996998 safe squares.

*/
