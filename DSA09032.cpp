/*
Trường học X có N sinh viên, trong đó có M cặp là bạn bè của nhau. Bạn của bạn cũng là bạn, tức là nếu A là bạn của B, B là bạn của C thì A và C cũng là bạn bè của nhau.
Các bạn hãy xác định xem số lượng sinh viên nhiều nhất trong một nhóm bạn là bao nhiêu?
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M ≤ 100 000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết sinh viên u là bạn của sinh viên v.
Output: 
Với mỗi test, in ra đáp án tìm được trên một dòng.

Input:
2
3 2
1 2
2 3
10 12
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9
Output:
3
7
*/
#include<bits/stdc++.h>

using namespace std;

int p[100005];
int n, m;
int size[100005];
void make_set() {
    for(int i = 1; i <= n ; i++) {
        p[i] = i;
        size[i] = 1;
    }
}

int Find(int u) {
    if(u == p[u]) {
        return u;
    }
    return Find(p[u]);
}
void Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if(a != b) {
        if(size[a] < size[b]) {
            swap(a,b);
        }
        p[b] = a;
        size[a] += size[b]; 
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        make_set();
        for(int i = 1; i <=m ; i++) {
            int x,y;
            cin >> x >> y;
            Union(x,y);
        }
        int ans = INT_MIN;
        for(int i = 1; i <= n ; i++) {
            if(i == p[i]) {
                ans = max(ans, size[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
