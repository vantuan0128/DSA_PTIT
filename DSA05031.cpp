/*
Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N. Ví dụ số 100 = 10^2 hoặc 100 = 5^2 + 5^2 + 5^2 + 5^2. 
Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.
Input:
3
100
6
25
Output:
1
3
1
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD=1e9+7;
int F[10005];
void tinh(){
	int i,j;
	for(int i=1;i<=10000;i++){
		F[i]=i;
		for(j=1;j<=sqrt(i);j++){
			F[i]=min(F[i],F[i-j*j]+1);
		}
	}
}

int main(){
	int n,t; cin>>t;
	tinh();
	while(t--){
		cin>>n;
		cout<<F[n]<<endl;
	}
	return 0;
}

/*
#include<bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = sqrt(n);
        int a[k+1];
        for(int i = 1; i <= k; i++) {
            a[i] = i* i;
        }
        int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <=n ; i++) {
            dp[i] = MOD;
            for(int j = 1; j <= k; j++) {
                if(i >= a[j]) {
                    dp[i] = min(dp[i], dp[i-a[j]] + 1);
                }
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}
*/
