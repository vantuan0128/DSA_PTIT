#include<bits/stdc++.h>
using namespace std;
int OK=0, X[50], N, K;
void in(){
	cout<<"("; 
    for(int i=1;i<=K;i++) {
		cout << X[i];
		if(i!=K) cout<<" ";
	}
    cout << ")"<<" ";
}
void sinh(){
    int i = K, j, a, b, c;
    while(X[i]==1) i--;
    if(i==0) OK = 1;
    else{
        X[i]--; a = K - i +1;
        b = a/X[i]; c = a%X[i];
        K = i;
        if(b>0){
            for(j=i+1;j<=i+b;j++)
                X[j] = X[i];
            K = K + b;
        }
        if(c>0){
            K++; X[K] = c;
        }
    }
}
main(){
	int t; cin>>t;
	while(t--){
    	cin >> N; K = 1; X[0] = 0; X[1] = N;
	    while(!OK){
	        in();
	        sinh();
	    }
	    cout<<endl;
	    OK=0; 
	}
}
