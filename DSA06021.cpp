/*
Một mảng được sắp được chia thành hai đoạn tăng dần được gọi là mảng sắp xếp vòng. Ví dụ mảng A[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3, 4} là mảng sắp xếp vòng.
Cho mảng A[] gồm n phần tử, hãy tìm vị trí của phần tử x trong mảng A[] với thời gian log(n).
Input:
2
10 3
5 6 7 8 9 10 1 2 3 4
10 3
1 2 3 4 5 6 7 8 9 10
Output:
9
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
main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n];
		nhap(a,n);
		int ok=0;
		for(int i=0;i<n;i++){
			if(a[i]==m){
				cout<<i+1<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"-1"<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int bs(int a[], int n, int x) {
    int l = 0, r = n-1;
    int res = -1;
    while(l <= r) {
        int m = (l+r)/2;
        if(a[m] == x) {
            return m;
        }
        else if(a[m] < x) {
            l = m +1;
        }
        else {
            r= m -1;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int a[n+4];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == x) {
                cout << i + 1;
            }
        }
        cout << endl;
    }
    return 0;
}
