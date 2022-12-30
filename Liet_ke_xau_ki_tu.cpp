#include <bits/stdc++.h>
using namespace std;
char c; int k;
int C[30];
void ql(int i){
	int j;
	for(j=C[i-1]+1;j<=c-'A'+1;j++){
			C[i]=j;
			if(i==k){
			for(int i=1;i<=k;i++) cout<<char(C[i]+'A'-1);
				cout<<endl;
			}
			else ql(i+1);
	}
}
int main(){
	cin>>c>>k;
	C[0]=0;
	ql(1);
}
