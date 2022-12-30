#include <bits/stdc++.h>
using namespace std;
int n,k,a[100000];
void sinh(){
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
		cin>>n>>k;
		set <int> s;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		sinh();
		for(int i=1;i<=k;i++){
			s.insert(a[i]);
		}
		if(s.size()-k==0) cout<<k<<endl;
		else cout<<s.size()-k<<endl;
	}
	return 0;
}
