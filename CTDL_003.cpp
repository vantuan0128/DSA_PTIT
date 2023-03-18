/*
CTDL_003 - Phương án tối ưu - Bài toán cái túi
Input:
4                                                
6          5          3          7    
5          4          6          5
Output:
10
*/
#include <bits/stdc++.h>
using namespace std;
int n,V,a[101],b[101],x[101],ok;
int ans=-1e9+7,value,volume;
int dem=0;
int mark;
vector<int> num[101];
void sinh(){
	int i=n;
	while(i>=1 && x[i]==1){
		x[i]=0;
		i--;
	}
	if(i==0) ok=1;
	else {
		x[i]=1;
		dem++;
		for(int i=1;i<=n;i++) num[dem].push_back(x[i]);
	}
}

int main(){
	cin>>n>>V;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++) x[i]=0;
	for(int i=1;i<=n;i++) num[dem].push_back(x[i]);
		dem++;
		ok=0;
	while(!ok){
		value=0,volume=0;
		for(int i=1;i<=n;i++){
			if(x[i]==1){
				value += a[i];
				volume += b[i];
			}
		}
		if(volume<=V) {
			if(value>=ans){
				ans=value; mark=dem; 
			}
		}
		sinh();
	}
	cout<<ans<<endl;
	for(int x : num[mark]){
		cout<<x<<' ';
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int X[1005];
int ok;
int n, k;
void khoitao() {
    for(int i = 1; i <= n; i++) {
        X[i] = 0;
    }
    ok = 1;
}

void sinh() {
    int i = n;
    while(i >= 1 && X[i] == 1) {
        X[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else {
        X[i] = 1;
    }
}

int main() {
    cin >> n >> k;
    int w[n+1], v[n+1];
    for(int i = 1; i <=n;i++) {
        cin >> v[i];
    }
    for(int i = 1; i <=n;i++) {
        cin >> w[i];
    }
    khoitao();
    int res = INT_MIN, Xopt[1005];
    while(ok) {
        int tong = 0;
        int kl = 0;
        for(int i = 1; i <=n ;i++) {
            if(X[i] == 1) {
                kl+= w[i];
            }
        }
        if(kl <= k) {
            for(int i = 1; i <=n ;i++) {
                if(X[i] == 1) {
                    tong += v[i];
                }
            }
        }
        if(tong > res) {
            res = tong;
            for(int i = 1; i <=n;i++) {
                Xopt[i] = X[i];
            }
        }
        sinh();
    }
    cout << res << endl;
    for(int i = 1; i <=n;i++) {
        cout << Xopt[i] << " ";
    }
    return 0;
}
