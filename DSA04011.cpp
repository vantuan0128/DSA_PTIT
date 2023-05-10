/*
Cho hai xâu nhị phân biểu diễn hai số. Nhiệm vụ của bạn là đưa ra tích của hai số. Ví dụ với xâu S1=”1100” và S2=”1010” ta sẽ có kết quả là 120.
Input:
2
1100 01
01 01
Output:
12
1
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll convert(string a){
	ll res=0;
	for(int i=0;i<a.length();i++){
		res=res*2+a[i]-'0';
	}
	return res;
}

void init(){
	string a,b;
	cin>>a>>b;
	cout<<convert(a)*convert(b)<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		init();
	}
	return 0;
}
