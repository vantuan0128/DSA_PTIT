#include <bits/stdc++.h>
using namespace std;
int n,V,a[101],b[101],x[101],ok;
int ans=-1e9+7,value,volume;
int dem=0;
int mark;
vector<int> num[101];
void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		i--;
	}
	if(i==0) ok=1;
	else {
		x[i]=1;
		dem++;
		for(int i=1;i<=n;i++) num[dem].push_back(x[i]);
	}
}

int main(){
	cin>>n>>V;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++) x[i]=0;
	for(int i=1;i<=n;i++) num[dem].push_back(x[i]);
		dem++;
		ok=0;
	while(!ok){
		value=0,volume=0;
		for(int i=1;i<=n;i++){
			if(x[i]==1){
				value += a[i];
				volume += b[i];
			}
		}
		if(volume<=V) {
			if(value>=ans){
				ans=value; mark=dem; 
			}
		}
		sinh();
	}
	cout<<ans<<endl;
	for(int x : num[mark]){
		cout<<x<<' ';
	}
	return 0;
}
