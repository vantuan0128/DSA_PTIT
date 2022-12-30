#include <bits/stdc++.h>
using namespace std;
int n,X[100];
vector <string> res;
void Try(int i,int sum){
	for(int j=X[i-1];j>=1;j--){
		X[i]=j;
		if(sum+j<=n){
			sum+=j;
			if(sum==n){
				string tmp="(";
				for(int j=1;j<= i;j++){
					tmp+=to_string(X[j]);
					if(j!=i) tmp+=" ";
				}
				tmp+=")";
				res.push_back(tmp);
			}
			else Try(i+1,sum);
			sum-=j;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		X[0]=n;
		Try(1,0);
		cout<<res.size()<<endl;
		for(string x : res){
			cout<<x<<" ";
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
