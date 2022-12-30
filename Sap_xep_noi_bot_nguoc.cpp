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
		for(int i=0;i<n;i++){
			int ok=0;
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
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
