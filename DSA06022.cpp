/*
Cho mảng A[] gồm n phần tử, hãy đưa ra số nhỏ nhất và số nhỏ thứ hai của mảng. Nếu không có số nhỏ thứ hai, hãy đưa ra -1.
Input:
2
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1  1  1
Output:
1 2
-1
*/
#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for(int i=0;i<n;i++){
			cin>>a[i];
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100000];
		nhap(a,n);
		sort(a,a+n);
		if(a[0]!=a[1]) cout<<a[0]<<' '<<a[1]<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+5];
        set<int> s;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        if(s.size() == 1) {
            cout << -1 << endl;
        }
        else {
            int cnt = 0;
            for(auto x : s) {
                if(cnt == 2) {
                    break;
                }
                else {
                    cout << x << " ";
                    ++cnt;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

