/*
Cho mảng A[] gồm n số nguyên dương và số k. Nhiệm vụ của bạn là đếm số các cặp phần tử có hiệu nhỏ hơn k. 
Ví dụ A[] = {1, 10, 4, 2 }, k=3 ta nhận được kết quả là 2 tương ứng với hiệu các cặp (1, 2), (4, 2).
Input:
2
4 3
1 10 4 2
3 5
2 3 4
Output:
2
3
*/
#include <bits/stdc++.h>
 
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define clear cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define test()   \
    int test;    \
    cin >> test; \
    while (test--)
#define pb push_back
#define fi first
#define se second
#define Mod 1000000007
#define ld long double
#define ll long long
#define lli unsigned long long int
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vl vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");
 
using namespace std;
 
int main()
{
    faster();
    test()
    {
        ll n, k;
        cin >> n >> k;
        vl a(n);
        For(i, 0, n) cin >> a[i];
        sortu(a);
        ll ans = 0;
        For(i, 1, n)
        {
            ll x = upper_bound(a.begin(), a.end(), a[i] - k) - a.begin();
            ans += i - x;
        }
        cout << ans << endl;
    }
    pause();
    return 0;
}
