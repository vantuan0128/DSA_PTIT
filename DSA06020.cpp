/*
Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy đưa ra 1 nếu X có mặt trong mảng A[], ngược lại đưa ra -1.
Input:
2 
5 16
2 4 7 9 16
7 98
1 22 37 47 54 88 96
Output:
1
-1
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i]==m){
				dem++;
				break;
			}
		}
		if(dem==1) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

bool bs(int a[], int n, int x) {
    int l = 0, r = n-1;
    int res = -1;
    while(l <= r) {
        int m = (l+r)/2;
        if(a[m] == x) {
            return true;
        }
        else if(a[m] < x) {
            l = m +1;
        }
        else {
            r= m -1;
        }
    }
    return false;
}

