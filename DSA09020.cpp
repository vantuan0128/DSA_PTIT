/*
Cho đơn đồ thị vô hướng có n đỉnh dưới dạng danh sách kề.

Hãy biểu diễn đồ thị bằng ma trận kề.

Input: Dòng đầu tiên chứa số nguyên n – số đỉnh của đồ thị (1 ≤  n ≤  1000). n dòng tiếp theo, dòng thứ i chứa các số nguyên là các đỉnh kề với đỉnh i.  
3
2 3
1 3
1 2
Output:
0 1 1
1 0 1
1 1 0

*/
#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define fi first
#define se second
#define pb push_back

int a[1005][1005]={0};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s; getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			a[i][stoi(tmp)]=a[stoi(tmp)][i]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
