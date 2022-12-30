#include <bits/stdc++.h>
using namespace std;
int N, A[50];
void in(int n){
	cout<<"(";
	for(int i=1;i<n;i++) cout<<A[i]<<" ";
	cout<<A[n]<<") ";
}
void quaylui(int i, int pos, int sum){
	int j;
	for(j=i;j>=1;j--){
		A[pos] = j;
		if(j == sum) in(pos);
		else if(j < sum){
			quaylui(j,pos+1,sum-j);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N;
		quaylui(N,1,N);
		cout<<endl;
	}
}
