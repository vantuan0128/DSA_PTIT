/*
Cho số nguyên dương (1<N<40) và số nguyên dương K<N. 
Với 1 tổ hợp chập K phần tử của N, hãy cho biết tổ hợp tiếp theo sẽ có bao nhiêu phần tử mới. 
Nếu tổ hợp đã cho là cuối cùng thì kết quả là K.  
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,a[1001];
int dem;
void xuly(){
		int i=k;
		while(i>=1&&a[i]>=n-k+i){
			i--;
		}
		if(i==0) return;
		else{
			a[i]=a[i]+1;
		 	for(int j=i+1;j<=k;j++){
		 		a[j]=a[i]+j-i;
			}
		}
}
int main(){
	int t; cin>>t;
	while(t--){
		set <int> s;
		dem=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		xuly();
		for(int i=1;i<=k;i++){
			s.insert(a[i]);
		}
		if(s.size()-k==0) cout<<k<<endl;
		else cout<<s.size()-k<<endl;
	}
	return 0;
}
