#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],X[1000];
int cnt=0;
vector <string> res;

void Try(int i, int pos){
	for(int j=pos; j<=n; j++){
		if(a[j] > X[i-1]){
			X[i]=a[j];
			if(i==k){
				cnt++;
			}
			if(i < k) Try(i+1,j+1);
		}
	}
}

int main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>a[i];
	Try(1,1);
	cout<<cnt<<endl;
	return 0;
}
