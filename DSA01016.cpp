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

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int a[1005];
int ok;
int dem, n;
void khoitao() {
    a[1] = n;
    dem = 1;
    ok = 1;
}

void sinh() {
    int i = dem;
    while(i >= 1 && a[i] == 1) {
        --i;
    }
    if(i == 0) ok = 0;
    else {
        a[i]--;
        int thieu = dem - i + 1;
        dem = i;
        int q = thieu/a[i], r = thieu % a[i];
        if(q) {
            for(int j = 1; j <= q; j++) {
                a[++dem] = a[i];
            }
        }
        if(r) {
            a[++dem] = r;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        khoitao();
        while(ok) {
            cout << "(";
            for(int i = 1; i < dem; i++) {
                cout << a[i] << " ";
            }
            cout << a[dem] << ") ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}
