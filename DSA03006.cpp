/*
Cho mảng A[] gồm N số và thực hiện các thao tác theo nguyên tắc dưới đây:

Ta chọn một mảng con sao cho phần tử ở giữa của mảng con cũng là phần tử ở giữa của mảng A[] (trong trường hợp N lẻ).
Đảo ngược mảng con đã chọn trong mảng A[]. Ta được phép chọn mảng con và phép đảo ngược mảng con bao nhiêu lần tùy ý.
Ví dụ với mảng A[] = {1, 6, 3, 4, 5, 2, 7} ta có câu trả lời là Yes vì: 
ta chọn mảng con {3, 4, 5} và đảo ngược để nhận được mảng A[]={1, 6, 5, 4, 3, 2, 7}, chọn tiếp mảng con {6, 5, 4, 3, 2} 
và đảo ngược ta nhận được mảng A[]={1, 2, 3, 4, 5, 6, 7}. 
Hãy cho biết ta có thể sắp xếp được mảng A[] bằng cách thực hiện các thao tác kể trên hay không?
Input:
2
7
1 6 3 4 5 2 7
7
1 6 3 4 5 7 2
Output:
Yes
No
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,ok; cin>>t;
	while(t--){
		cin>>n;
		ok=0;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i] , b[i] = a[i];
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(!(a[i] == b[i] || a[i] == b[n-i-1])){
				cout<<"No"<<endl; ok=1;
				break;
			}
		}
		if(ok==0) cout<<"Yes"<<endl;
	}
	return 0;
}
