/*
Cho hai số nguyên không âm a và b. Hãy tính ab.
Nếu kết quả quá lớn hãy chia dư cho 10^9 + 7.
Gồm không quá 20 bộ test, mỗi test ghi trên một dòng hai số a,b; a không quá 9 chữ số, b không quá 18 chữ số.
Input kết thúc khi a = b = 0
Input:
2 3
2 4
3 2
0 0
Output:
8
16
9
*/
#include <bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long powM(long a, long long b){
	if(b==0) return 1;
	if(b==1) return a%M;
	long long x = powM(a,b/2);
	if(b%2==0) return (x*x)%M;
		else return (a*(x*x%M))%M;
}
main(){
	long a=1;
	long long b=1;
	while(1){
		cin >> a >> b;
		if(a==0 && b==0) break; 
		cout << powM(a,b) << endl;
	}
}
