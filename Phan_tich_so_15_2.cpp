#include <bits/stdc++.h>
using namespace std;
int OK=0,X[50],N,K;
void in(){
	for(int i=1;i<=K;i++) cout<<X[i]<<" ";
	cout<<endl;
}
void sinh(){
	int i = K, j, a, b, c;
	while(X[i] == 1) i--;
	if(i==0) OK=1;
	else{
		X[i]--; a = K-i+1;
		b = a/X[i]; //so lan chia nguyen
		c = a%X[i]; //so phan du
		K = i;
		if(b>0){
			for(j=i+1;j<=i+b;j++) {
			X[j] = X[i]; 
			K= K + b; }
		}
		if(c>0){
			K++;
			X[K] = c;
		}
	}
}
main(){
	cin >> N; K = 1; X[0] = 0; X[1] = N;
	while(!OK){
		in();
		sinh();
	}
}
