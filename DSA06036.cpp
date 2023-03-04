/*
Cho dãy số A[] gồm có N phần tử.
Nhiệm vụ của bạn là hãy kiểm tra tồn tại bộ ba (i, j, k) mà A[i] + A[j] + A[k] = K cho trước hay không.
Input:
2
6 22
1 4 15 6 10 8
3 4
1 1 1
Output:
YES
NO
*/
#include<bits/stdc++.h>

using namespace std;

bool check(int a[], int n, int k) {
    for(int i = 0 ; i < n-2; i++) {
        int l = i + 1, r = n - 1;
        while(l < r) {
            if(a[i] + a[l] + a[r] == k) {
                return true;
            }
            else if(a[i] + a[l] + a[r] < k) {
                ++l;
            }
            else {
                --r;
            }
        }
    }
    return false;
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        int a[n+5];
        for(int i = 0 ; i <n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        if(check(a,n,k)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

//Cach 2
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long k; cin>>k;
		long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int ok=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(binary_search(a+j+1,a+n,k-a[i]-a[j])){
					ok=1; break;
				}
			}
			if(ok==1) break;
		}
		if(ok==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
