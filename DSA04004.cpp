/*
Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:
Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.
Ví dụ với 2 bước biến đổi, ta có [1] - [1 2 1] - [1 2 1 3 1 2 1].
Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?
Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2N - 1).
Input: 2
3 2
4 8
Output: 
2
4
Giải thích test 1: Dãy số thu được là [1, 2, 1, 3, 1, 2, 1].
Giải thích test 2: Dãy số thu được là [1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1].
*/
#include <bits/stdc++.h>
using namespace std;
int dequy(int n, long long k){
	long long x=pow(2,n-1);
	if(k==x) return n;
	if(k<x) return dequy(n-1,k);
	return dequy(n-1,k-x);
}
main(){
	int t,n; long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<dequy(n,k)<<endl;
	}
}
