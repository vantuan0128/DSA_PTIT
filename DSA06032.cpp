/*
Cho dãy số A[] gồm có N phần tử.
Nhiệm vụ của bạn là hãy đếm số bộ ba (i, j, k) mà A[i] + A[j] + A[k] < K cho trước.
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm số nguyên N và K (1≤ N ≤5000, -10^9 ≤ K ≤ 10^9).
Dòng tiếp theo gồm N số nguyên A[i] (-10^9 ≤ A[i] ≤ 10^9).
Input:
2
4 2
-2 0 1 3
5 12
5 1 3 4 7
Output:
2
4
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		ll k; cin>>k;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll dem=0;
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				auto it=lower_bound(a+j+1,a+n,k-a[i]-a[j]);	
				it--;
				dem+=0ll+(it-(a+j));
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
