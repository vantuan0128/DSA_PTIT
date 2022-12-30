#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int cnt[256]={0};
		for(char x : s) cnt[x]++;
		int res=0;
		for(int i=0;i<256;i++) res=max(res,cnt[i]);
		if(res<=s.size()-res+1) cout<<"1\n";
		else cout<<"-1\n";
	}
	return 0;
}
