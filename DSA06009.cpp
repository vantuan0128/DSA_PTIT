/*Cho mảng A[] gồm n phần tử và số k. Đếm tất cả các cặp phần tử của mảng có tổng bằng k. 
Ví dụ A[] = {1, 5, 3, 4, 2 }, k = 7 ta có kết quả là 2 cặp (3, 4), (5, 2).
Input:
2
5 9 
1 5 4 1 2

3 2
1 1 1
Output: 
1
3
*/

#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n];
		nhap(a,n);
		int dem=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]==m-a[i]) dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int bs_min(int a[], int l, int r, int x) {
    int res = -1;
    while(l <= r) {
        int m = (l+r)/2;
        if(a[m] == x) {
            res = m;
            r = m-1;
        }
        else if(a[m] < x) {
            l = m +1;
        }
        else {
            r = m -1;
        }
    }
    return res;
}

int bs_max(int a[], int l, int r, int x) {
    int res = -1;
    while(l <= r) {
        int m = (l+r)/2;
        if(a[m] == x) {
            res = m;
            l = m + 1;
        }
        else if(a[m] < x) {
            l = m +1;
        }
        else {
            r = m -1;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n+1];
        for(int i = 0 ; i< n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int cnt = 0;
        for(int i = 0; i < n-1; i++) {
            int d1 = bs_min(a, i + 1, n-1, k - a[i]);
            int d2 = bs_max(a, i+1, n-1, k - a[i]);
            if(d1 != -1 && d2 != -1) {
                cnt += d2 - d1 + 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
