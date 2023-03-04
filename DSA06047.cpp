/*
Cho dãy số A[] gồm có N phần tử. Một bộ 3 số (a, b, c) được gọi là bộ ba số Pytago nếu như a^2 + b^2 = c^2.
Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số Pytago trong dãy số A[] hay không?
Input:
2
5
3 1 4 6 5
3
1 1 1
Output:
YES
NO
*/
#include <bits/stdc++.h>
using namespace std;
long tes(long a, long b){
	long c=a*a+b*b;
	long k=sqrt(c);
	if(k*k==c) return k;
	return 0;
}
void nhap(long a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int ok=0;
		long a[n];
		nhap(a,n);
		sort(a,a+n);
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				long long k=tes(a[i],a[j]);
				if(k!=0&&binary_search(a+j+1,a+n,k)){
					ok=1;
					break;
				}
			}
			if(ok==1) break;
		}
		if(ok==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

void solve(int a[], int n) {
    for(int i = n-1; i > 1; i--) {
        int l = 0, r = i - 1;
        while(l < r) {
            if(pow(a[l], 2) + pow(a[r], 2) == pow(a[i], 2)) {
                cout << "YES" <<endl;
                return;
            }
            else if( pow(a[l], 2) + pow(a[r], 2) < pow(a[i], 2)) {
                ++l;
            }
            else {
                --r;
            }
        }
    }
    cout << "NO" <<endl;
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 0; i< n;i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        solve(a,n);
    }
    return 0;
}
