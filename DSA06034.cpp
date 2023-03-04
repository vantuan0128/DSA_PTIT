/*
Cho dãy số A[] gồm có N phần tử.
Nhiệm vụ của bạn là đếm xem có bao nhiêu cặp (i, j) mà A[i] + A[j] = K cho trước.
Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 0 ≤ K ≤ 10^9).
Dòng tiếp theo gồm N số nguyên A[i] (-10^9 ≤ A[i] ≤ 10^9).
Input:
4
4 6
1 5 7 -1
5 6
1 5 7 -1 5
4 2
1 1 1 1
13 11
10 12 10 15 -1 7 6 5 4 2 1 1 1
Output:
2
3
6
9
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		long k; cin >> k;
		ll a[n];
		for(ll &x : a) cin >> x;
		sort(a,a + n);
		ll ans = 0;
		for(int i=0;i<n;i++){
			auto it1 = lower_bound(a+i+1,a+n,k-a[i]);
			auto it2 = upper_bound(a+i+1,a+n,k-a[i]);
			ans += it2-it1;
		}
		cout << ans << endl;
	}
	return 0;
}
