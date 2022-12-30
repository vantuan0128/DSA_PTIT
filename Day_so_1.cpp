#include<bits/stdc++.h>
using namespace std;
int n,a[11];
void ql(int n){
	if(n==0){
	return;
		
	}
	cout<<"[";		
		for(int i=1;i<=n;i++){
			cout<<a[i];
			if(i!=n)cout<<" ";
		}
		cout<<"]"<<endl;
		for(int i=1;i<n;i++){
			a[i]=a[i]+a[i+1];
		}
		ql(n-1);
	}

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		ql(n);
	}
}

