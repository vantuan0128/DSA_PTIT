#include <bits/stdc++.h>
using namespace std;

int n, a[100],X[100];

vector <string> res;

void Try(int i, int pos){
	for(int j=pos;j<=n;j++){
		if(a[j]>X[i-1]){
			X[i]=a[j];
			if(i>=2){
				string tmp="";
				for(int j=1;j<=i;j++){
					tmp += to_string(X[j]) + " ";
				}
				res.push_back(tmp);
			}
			Try(i+1,j+1);
		}
	}
}

int main(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	Try(1,1);
	sort(begin(res),end(res));
	for(string x : res){
		cout<<x<<endl;
	}
	return 0;
}
