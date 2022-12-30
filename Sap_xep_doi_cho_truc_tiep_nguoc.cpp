#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n];
		vector<int>v[1001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int k=0;
		for(int i=0;i<n-1;i++){
			int ok=0;
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					swap(a[i],a[j]);
					ok=1;
				}
			}
	if(ok==1){
		for(int h=0;h<n;h++){
			v[k].push_back(a[h]);
		}	
		++k;
		}
	}
	
	for(int i=k-1;i>=0;i--){
		cout<<"Buoc"<<" "<<i+1<<":"<<" ";
		for(int it:v[i]){
			cout<<it<<" ";
		}
		
		cout<<endl;
	}
}
}
