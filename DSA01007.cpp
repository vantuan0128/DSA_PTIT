/*
Xâu ký tự str được gọi là xâu AB nếu mỗi ký tự trong xâu hoặc là ký tự ‘A’ hoặc là ký tự ‘B’.
Ví dụ xâu str=”ABBABB” là xâu AB độ dài 6. Nhiệm vụ của bạn là hãy liệt kê tất cả các xâu AB có độ dài n.
*/
#include <bits/stdc++.h>
using namespace std;
void SinhXauAB(char a[], int n){
	for(int i=1;i<=n;i++){
		a[i]='A';
	}
	while(1){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<" ";
		int i=n;
		while(i>=1&&a[i]=='B'){
			a[i]='A';
			i--;
		}
		if(i==0) return;
		else a[i]='B';
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		char a[100000];
		SinhXauAB(a,n);
		cout<<endl;
	}
	return 0;
}
