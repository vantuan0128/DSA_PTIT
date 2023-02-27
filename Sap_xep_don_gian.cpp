#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n+1], vitri[n+1] = {0};
	int res = 0;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		// Xac dinh do day day con tang dai nhat
		vitri[a[i]] = vitri[a[i]-1] + 1;
		res = max(res,vitri[a[i]]);
	}
	cout << n - res <<endl;
	return 0;
}
