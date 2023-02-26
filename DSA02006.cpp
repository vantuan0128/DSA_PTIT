/*
Cho dãy số A[] = (a1, a2, .., an) và số tự nhiên K. 
Hãy đưa ra tất cả các dãy con của dãy số A[] sao cho tổng các phần tử của dãy con đó đúng bằng K. 
Các phần tử của dãy số A[] được giả thuyết là nguyên dương và không có các phần tử giống nhau. 
Ví dụ với dãy con A[] = {5, 10, 15, 20, 25}, K = 50 ta có 3 dãy con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.

Input:
2
5 50
5  10 15 20  25
8  53
15  22  14  26  32  9  16  8
Output:
[5 10 15 20] [5 20 25] [10 15 25]
[8 9 14 22] [8 14 15 16] [15 16 22]
*/
#include <bits/stdc++.h>
using namespace std;
int n,s,check[100],a[100],x[100],ok;
void ql(int i, int k, int sum){
	if(sum==s){
			cout<<"[";
		for(int i=1;i<k;i++){
			cout<<x[i];
			if(i!=k-1) cout<<" ";
		}
		cout<<"]"<<" ";
		ok=1;
	}
	else {	
		for(int j=i;j<=n;j++){
			if(check[j]==0&&sum+a[j]<=s){
			check[j]=1;
			x[k]=a[j];
			ql(j+1,k+1,sum+a[j]);
			check[j]=0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		ok=0;
		cin>>n>>s;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ql(1,1,0);
		if(ok==1) cout<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
