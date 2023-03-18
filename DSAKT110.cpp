/*
Có N ngôi nhà trên một dãy phố, mỗi ngôi nhà chứa đựng một số lượng tài sản khác nhau. 
Một tên trộm muốn ăp cắp được nhiều nhất tài sản của dãy phố nhưng không muốn lấy tài sản của hai nhà kề nhau. 
Hãy cho biết, bằng cách đó tên trộm có thể đánh cắp được nhiều nhất bao nhiêu tài sản.
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N là số lượng ngôi nhà; dòng tiếp theo đưa vào N số là tài sản tương ứng trong mỗi ngôi nhà; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤10^6; 1≤A[i] ≤10^7.
Input:
2
6
5 5 10 100 10 5
4
3 2 7 10
Output:
110
13
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1],dp[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		dp[1]=a[1],dp[2]=max(a[1],a[2]);
		for(int i=3;i<=n;i++){
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
		cout<<dp[n]<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1 ; i <= n;i++) {
            cin >> a[i];
        }
        int b[n+1], c[n+1];
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        for(int i = 1; i <= n;i++) {
            b[i] = c[i-1] + a[i];
            c[i] = max(c[i-1], b[i-1]);
        }
        cout << max(b[n],c[n]) << endl;
    }
}
