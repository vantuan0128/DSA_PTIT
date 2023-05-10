/*
Cho dãy số A[] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần của dãy A[].
Ví dụ với dãy A[] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả là 106 = 1 + 2 + 3 + 100. 
Với dãy A[] = {10, 7, 5} ta có kết quả là 10. Với dãy A[] = {1, 2, 3, 5} ta có kết quả là 11.
Input:
3
7
1 101 2 3 100 4 5
3
10 7 5
4
1 2 3 5
Output:
106
10
11
*/
#include <bits/stdc++.h>
using namespace std;


int qhd(int a[], int n){
	int i,j,F[1005],kq=0;
	for(i=0;i<n;i++){
		F[i]=a[i];
		for(j=0;j<i;j++){
			if(a[j]<a[i]) {
				F[i]=max(F[i],F[j]+a[i]);
			}
		}
		kq=max(kq,F[i]);
	}
	return kq;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1],dp[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		memset(dp,0,sizeof(dp));
		dp[0]=a[0];
		for(int i=1;i<n;i++){
			dp[i]=a[i];
			for(int j=0;j<i;j++){
				if(a[j]<a[i]) dp[i]=max(dp[i],dp[j]+a[i]);
			}
		}
		sort(dp,dp+n);
		cout<<dp[n-1]<<endl;
	}
	return 0;
}
/*
#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0; i < n ;i++) {
            cin >> a[i];
        }
        int F[n+1];
        for(int i = 0; i <n ;i++) {
            F[i] = a[i];
            for(int j = 0; j < i; j++) {
                if(a[i] > a[j]) {
                    F[i] = max(F[i], F[j] + a[i]);
                }
            }
        }
        cout << *max_element(F , F + n ) << endl;
    }
}

*/
