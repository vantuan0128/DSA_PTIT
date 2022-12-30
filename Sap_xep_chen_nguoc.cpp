#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector <int> vt[1001];
	int k=0;
	int a[n],b[n]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int i,j,t,key;
	for(i=1;i<n;i++){
		key=a[i]; j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		for(int h=0;h<i+1;h++){
			vt[k].push_back(a[h]);
		}
		k++;
	}
	for(int i=k-1;i>=0;i--){
		cout<<"Buoc"<<" "<<i+1<<": ";
		for(auto it : vt[i]){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	cout<<"Buoc 0: "<<b[0]<<endl;
	return 0;
}
