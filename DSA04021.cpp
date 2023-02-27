/*
Người ta tạo ra một dãy xâu ký tự nhị phân X[] trong đó:
X[1] = “0”
X[2] = “1”
X[i] = X[i-2] + X[i-1] với i>2
Với phép cộng (+) là phép nối hai xâu với nhau. 
Cho hai số tự nhiên N và K (1<N<93; K đảm bảo trong phạm vi của xâu X[N]).
Hãy xác định ký tự thứ K trong xâu X[N] là ký tự ‘0’ hay ký tự ‘1’.
Input:
2
3 1
4 3
Output:
0
1
*/

#include <bits/stdc++.h>
using namespace std;
long long F[100];
char FiboWord(int n, long long k){
	if(n==1) return '0';
	if(n==2) return '1';
	if(k <= F[n-2]) return FiboWord(n-2,k);
	return FiboWord(n-1,k-F[n-2]);
}

main(){
	F[0]=0;F[1]=1;
	for(int i=2;i<=92;i++) F[i]=F[i-1]+F[i-2];
	int t,n; long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<FiboWord(n,k)<<endl;
	}
}
