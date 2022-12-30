#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long a[n];
	vector<long>v[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=0;
	for(int i=0;i<n-1;i++){
			int min_pos=i;
			for(int j=i+1;j<n;j++){
				if(a[j]<a[min_pos]){
					min_pos=j;
				}
			}
		swap(a[i],a[min_pos]);
			for(int h=0;h<n;h++){
				v[k].push_back(a[h]);
			}	
		k++;
	}
	for(int i=k-1;i>=0;i--){
		cout<<"Buoc"<<" "<<i+1<<": ";
		for(auto it : v[i]){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}

