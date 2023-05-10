/*
Cho dãy số A[] gồm N phần tử. Hãy tìm tổng lớn nhất của dãy con của dãy số A[] sao cho dãy con không có hai số cạnh nhau trong A[]. 
Ví dụ với A[] = {6, 7, 1, 3, 8, 2, 4} ta có kết quả là 19 tương ứng với tổng của dãy con {6, 1, 6, 4} 
không có haI phần tử nào kề nhau trong A[].
Input:
2
6
5 5 10 100 10 5
4
3 2 7 10
Output:
110
13
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000005], F[1000005];
main(){
	int t,n,i; cin>>t;
	while(t--){
		cin>>n;
		memset(F,0,sizeof(F));
		for(int i=1;i<=n;i++) cin>>a[i];
		F[1]=a[1];
		F[2]=max(a[1],a[2]);
		for(int i=3;i<=n;i++){
			F[i]=max(F[i-2]+a[i],F[i-1]);
		}
		cout<<F[n]<<endl;
	}
}
/*
#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int b[n+1], c[n+1];
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
        for(int i = 1; i<=n;i++) {
            b[i] = c[i-1] + a[i];
            c[i] = max(b[i-1], c[i-1]);
        }
        cout << max(b[n],c[n]) << endl;
    }
    return 0;
}
*/
