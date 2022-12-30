#include <bits/stdc++.h>
using namespace std;
int n,k;
string a;
vector<string> v;
void check(){
	int ok=0;
	for(int i=0;i<n-k;i++){
		int count=0;	
		for(int j=i;j<i+k;j++){ //xet cac khoang do dai k
			if(a[j]=='A') count++;
		}
		if(count==k) ok++; //dam bao k ki tu lien nhau la duy nhat
	}
	if(ok==1) v.push_back(a);
}
void ql(int i){
	for(char j='A';j<='B';j++){
		a[i]=j;
		if(i==n-1) check();
		else ql(i+1); //xay dung a[1]...
	}
}
int main(){
	cin>>n>>k;
	a.resize(n); //xau a co do dai n: [0,n-1] 
	ql(0); //xay dung tu a[0]
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
