#include<bits/stdc++.h>
using namespace std;
int n,a[11];
int k;
vector<int> v[1001];
void ql(int n){
	if(n==0){
	return;
		
	}		
		for(int h=1;h<=n;h++){
			v[k].push_back(a[h]);
		}
		k++;
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
	k=0;
		ql(n);
		for(int i=k-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<v[i].size()-1;j++){
				cout<<v[i][j]<<" ";
			}
			cout<<v[i][v[i].size()-1]<<"]"<<" ";
			v[i].clear();
		}
		cout<<endl;
	}
}

