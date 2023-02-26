/*
Cho dãy số A[], B[] và C[] là dãy không giảm và có lần lượt N, M, K phần tử. Nhiệm vụ của bạn là hãy tìm các phần tử chung của 3 dãy số này.
Với mỗi test, in ra trên một dòng là đáp án thu được. Nếu không tìm được đáp án, in ra “NO”.
Input:
3
6 5 8
1 5 10 20 40 80
5 7 20 80 100
3 4 15 20 30 70 80 120

3 5 4
1 5 5
3 4 5 5 10
5 5 10 20

3 3 3
1 2 3
4 5 6
7 8 9
Output:
20 80
5 5
NO
*/
#include<bits/stdc++.h>
using namespace std;
void solve(int a[], int b[], int c[], int n, int m, int p)
{
    int i = 0, j = 0, k = 0;
    int dem = 0;
    while(i < n && j < m && k < p)
    {
        if(a[i] == b[j] && a[i] == c[k])
        {
            cout << a[i] << " ";
            dem++;
            i++; j++; k++;
        }
        else if(a[i] > b[j]) j ++;
        else if(a[i] > c[k]) k ++;
        else i++;
    }
    if(dem == 0) cout << "NO";
    cout << endl;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, m, p;
        cin >> n >> m >> p;
        int a[n + 10], b[m + 10], c[p + 10];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < p; i++) cin >> c[i];
        solve(a, b, c, n, m, p);
    }
    return 0;
}
