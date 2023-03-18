/*
Cho dãy gồm N số phân biệt AN = {a1, a2, .., aN } và số tự nhiên K (K<=N<=100). 
Ta gọi một dãy con tăng dần bậc K của dãy số AN là một dãy các số gồm K phần tử trong dãy đó thỏa mãn tính chất tăng dần. 
Bài toán được đặt ra là in ra màn hình  số các dãy con tăng dần bậc K của dãy số AN. Ví dụ :
Input:
5    3
2    5    15   10    20  
thì Output : 7 (số các dãy con tăng dần bậc 3 của dãy số AN)
*/
#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],X[1000];
int cnt=0;
vector <string> res;

void Try(int i, int pos){
	for(int j=pos; j<=n; j++){
		if(a[j] > X[i-1]){
			X[i]=a[j];
			if(i==k){
				cnt++;
			}
			if(i < k) Try(i+1,j+1);
		}
	}
}

int main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>a[i];
	Try(1,1);
	cout<<cnt<<endl;
	return 0;
}

//Cach 2: Toi uu
#include<bits/stdc++.h>

using namespace std;

void backtracking(int n, int k, int a[], int X[], int i, int pos, int &cnt) {
    for(int j = pos ; j < n; j++) {
        if(a[j] > X[i-1]) {
            X[i] = a[j];
            if(i == k) {
                ++cnt;
            }
            else if(i < k) {
                backtracking(n,k,a,X, i+1, j+1, cnt);
            }
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    int X[k+1];
    X[0] = 0;
    backtracking(n,k,a,X,1,0,cnt);
    cout << cnt;
    return 0;
}
