/*
Cho mảng các số nguyên A[] gồm N phần tử. Hãy chia mảng số nguyên A[] thành K tập con khác rỗng sao cho tổng các phần tử của mỗi tập con đều bằng nhau.
Mỗi phần tử thuộc tập con xuất hiện duy nhất một lần trong tất cả các tập con. Ví dụ với A[] = {2, 1, 4, 5, 6}, K =3 ta có kết quả {2, 4}, {1, 5}, {6}.
Input:
2
5 3
2 1 4 5 6
5 3
2 1 5 5 6
Output:
1
0
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k,ok;
int a[1000],tong;

void Try(int i, int sum){
	if(ok) return;
	for(int j = i; j<=n; j++){
		if(sum + a[j] <= tong){
			sum += a[j];
			if(sum == tong){
				ok = 1;
				return;
			}
			else Try(i+1,sum);
			sum -= a[j];
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			tong+=a[i];
		}
		if(tong % k != 0){
			cout<<0<<endl;
			tong=0;
		}
		else{
			tong /= k;
			ok=0;
			Try(1,0);
			if(ok == 1) cout<<1<<endl;
			tong=0;
		}
	}
	return 0;
}

