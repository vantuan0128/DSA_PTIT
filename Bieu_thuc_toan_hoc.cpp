#include <bits/stdc++.h>
using namespace std;
int number[6], OK, chuaxet[6];
void quaylui(int i, int giatri){
	if(i==5 && giatri==23){
		OK=1; return;
	}
	for(int j=0;j<5;j++){
		if(chuaxet[j]){
			chuaxet[j] = 0;
			quaylui(i+1,giatri + number[j]);
			quaylui(i+1,giatri * number[j]);
			quaylui(i+1,giatri - number[j]);
			chuaxet[j] = 1;
		}
	}
}
main(){
	int t,i;
	cin>>t;
	while(t--){
		for(i=0;i<5;i++) cin>>number[i];
		OK = 0;
		for(i=0;i<5;i++){
			chuaxet[i] = 0;
			quaylui(1,number[i]);
			chuaxet[i] = 1;
		}
		if(OK) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
