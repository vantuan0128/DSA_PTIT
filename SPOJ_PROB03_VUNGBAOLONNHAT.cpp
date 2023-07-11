#include <iostream>

using namespace std;
using ll = long long;

int main() {
	int t; cin >> t;
	for(int k = 1; k <= t; k++) {
		int h, w, m, n;
		cin >> h >> w >> m >> n;
		ll a[150][150];
		ll res = -100000000;
		//Input
		for(int i = 0 ; i < m; i++) {
			for(int j = 0 ; j < n; j++) {
				cin >> a[i][j];
			}
		}
		int i = 0;
		while (i <= m - h) {
			int j = 0;
			while(j <= n - w) {
				ll sum = 0;
				//First row
				for(int x = j; x < j + w; x++) if(a[i][x] % 2 == 0) sum += a[i][x];
				//Last row
				for(int x = j; x < j + w; x++) if(a[i + h - 1][x] % 2 == 0) sum += a[i + h - 1][x];
				//First column
				for(int x = i; x < i + h; x++) if(a[x][j] % 2 == 0) sum += a[x][j];
				//Last column
				for(int x = i; x < i + h; x++) if(a[x][j + w - 1] % 2 == 0) sum += a[x][j + w - 1];
				
				//Check whether the values at the 4 corners are even or not. If yes, it must be subtracted
				if (a[i][j] % 2 == 0) sum -= a[i][j];
				if (a[i + h - 1][j + w - 1] % 2 == 0) sum -= a[i + h - 1][j + w - 1];
				if (a[i][j + w - 1] % 2 == 0) sum -= a[i][j + w - 1];
				if (a[i + h - 1][j] % 2 == 0) sum -= a[i + h - 1][j];
					
				res = max(res, sum);
				j++;
			}
			i++;
		}
		cout << "#" << k << " " << res << endl;
	}
	return 0;
}

/*
Input:
1
3 2 5 6
26 63 38 56 76 49
92 55 9 90 13 21
53 39 1 52 21 74
82 66 27 86 79 31
2 13 57 63 34 72

Output:
#1 274
*/
