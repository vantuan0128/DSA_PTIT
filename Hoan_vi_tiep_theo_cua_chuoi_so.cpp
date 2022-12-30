#include <bits/stdc++.h>
using namespace std;
int n,ok;
string s;
void sinh(){
	cin>>s;
	int i=s.length()-2;
	while(i>=0&&s[i]>=s[i+1]) i--;
	if(i==-1) ok=0;
	else{
		int j=s.length()-1;
		while(s[j]<=s[i]) j--;
		swap(s[i],s[j]);
		reverse(s.begin()+i+1,s.end());
	}
}
int main(){
	int t; cin>>t;
	int n;
	while(t--){
		ok=1;
		cin>>n;
		sinh();
		if(ok==0) cout<<n<<' '<<"BIGGEST\n";
		else cout<<n<<' '<<s<<endl;
	}
	return 0;
}
