/*
Một máy ATM hiện có n (n ≤ 30) tờ tiền có giá trị t[1], t[2], …, t[n]. Hãy tìm cách trả ít tờ nhất với số tiền đúng bằng S 
(các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ được dùng một lần).

Input: Dòng đầu tiên ghi số bộ test T (T<10). Mỗi bộ test gồm 2 số nguyên n và S (S ≤ 109). Dòng thứ hai chứa n số nguyên t[1], t[2], …, t[n] (t[i] ≤ 109)

Output: Với mỗi bộ test ghi ra số tờ tiền ít nhất phải trả.

Nếu không thể tìm được kết quả, in ra -1.
Input:
1
3 5
1 4 5
Output:
1
*/
#include <bits/stdc++.h>
using namespace std;
int n,S,k;
int a[100],X[100];
int ans=0;
void Try(int i){
	for(int j=X[i-1]+1;j<=n-k+i; j++){
		X[i]=j;
		if(i == k){
			int sum=0;
			for(int j=1; j<=k; j++){
				sum+=a[X[j]];
			}
			if(sum == S){
				ans = k; return;
			}
		}
		else Try(i+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int ok=0;
		cin>>n>>S;
		for(int i=1; i <= n; i++) cin>>a[i];
		sort(a+1,a+n+1);
		for(int i = 1; i <= n; i++){
			k = i;
			Try(1);
			if(ans){
				cout<<ans<<endl;
				ans=0;
				k=0;
				ok=1;
				break;
			}
		}
		if(ok == 0) cout<<"-1"<<endl;
	}
	return 0;
}
