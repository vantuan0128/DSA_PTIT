/*
Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là hãy tìm một số có tần số xuất hiện nhiều nhất, yêu cầu lớn hơn N/2 lần xuất hiện trong dãy số.
Input:
2
9
3 3 4 2 4 4 2 4 4
8
3 3 4 2 4 4 2 4
Output:
4
NO
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int i;
		map<int,int> mp;
		for(i = 0;i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int ok = 0;
		for(auto it : mp){
			if(it.second > n/2){
				cout << it.first << " " << endl;
				ok = 1; break;
			}
		}
		if(ok == 0) cout << "NO" << endl;
	}
} 
