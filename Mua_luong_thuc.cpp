#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,s,m; cin>>n>>s>>m;
		int ok=0;
		int res=0, need=s*m; //du trong s ngay
		for(int i=1;i<=s;i++){
			if(i%7==0) continue; //chu nhat khong ban
			else{
				res++;
				if(res*n>=need){
					cout<<res<<endl; ok=1;
					break;
				}
			}
		}
		if(ok==0) cout<<"-1"<<endl;
	}
	return 0;
}
