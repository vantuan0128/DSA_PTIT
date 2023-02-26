/*
Nam có N thẻ bài, mỗi thẻ ghi một con số từ 1 tới N. Không có 2 thẻ nào ghi hai số trùng nhau. 
Nam muốn xếp thứ tự các thẻ bài sao cho không có hai con số nào liền kề nhau ở cạnh nhau.

Ví dụ với N = 4 thì cách xếp 3142 là hợp lệ nhưng cách xếp 1324 không hợp lệ.

Hãy giúp Nam liệt kê tất cả các cách xếp thỏa mãn theo thứ tự từ điển.  
Input: 
1
4
Output:
2413
3142
*/
#include <bits/stdc++.h>
using namespace std;
int n,a[30],b[30]={0};
bool check(int a[],int n){
	for(int i=1;i<n;i++){
		if(a[i]==0) return false;
		if(abs(a[i+1]-a[i])==1) return false;
	}
	return true;
}
void in(){
	if(check(a,n)){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
	}
}
void ql(int i){
	int j;
	for(j=1;j<=n;j++){
		if(!b[j]){
			a[i]=j; b[j]=1;
			if(i==n) in();
			else ql(i+1);
			b[j]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		a[0]=0;
		ql(1);
	}
}
