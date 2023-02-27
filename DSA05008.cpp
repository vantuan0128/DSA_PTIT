/*
Cho N  số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. 
Tìm ra một dãy con của dãy A (không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.
Với mỗi bộ test, nếu bài toán vô nghiệm thì in ra “NO”, ngược lại in ra “YES”
Input:
2
5 6
1 2 4 3 5

10 15
2 2 2 2 2 2 2 2 2 2
Output:
YES
NO
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	int n,S; 
	while(t--){
		int check[40001];
		memset(check,0,sizeof(check));
		cin>>n>>S;
		int a[201];
		check[0] = 1;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++){
			//Set tu S -> a[i]
			for(int j= S; j>=a[i]; j--){
				if(check[j-a[i]] == 1){
					check[j] = 1;
				}
			}
		}
		if(check[S]==1) cout<<"YES\n";
			else cout<<"NO\n";
	}
	return 0;
}
