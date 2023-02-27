/*
Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là hợp nhất hai mảng A[] và B[] để được một mảng mới đã được sắp xếp. 
Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là C[] = {-1, 1, 0, 2, 3, 5, 6, 6, 7, .
Input:
1
3 3
10 5 15
20 3 2
Output: 2 3 5 10 15 20
*/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for(int i = 0; i < n ; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i = 0; i < m ; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < m + n ; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
