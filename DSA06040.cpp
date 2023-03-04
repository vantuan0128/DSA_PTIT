/*
Cho ba dãy số A[], B[], C[] gồm N1, N2, N3 phần tử đã được sắp xếp. 
Hãy đưa ra các phần tử có mặt trong cả ba dãy theo thứ tự tăng dần. Nếu không có đáp án, in ra -1.
Input:
1
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120
Output:
20 80
*/

#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int m,n,p;
		int i=0,j=0,k=0,ok=0;
		cin>>m>>n>>p;
		long long a[m],b[n],c[p];
		nhap(a,m);
		nhap(b,n);
		nhap(c,p);
		while(i < m && j < n && k < p){
			if(a[i] == b[j] && b[j] == c[k]){
				cout << a[i] <<" "; ok=1;
				i++; j++; k++;
			}
			else if(a[i] < b[j]) i++;
				else if(b[j] < c[k]) j++;
					else k++;
		}
		if(ok == 0) cout<<"-1";
		cout << endl;
	}
	return 0;
}

//Cach 2
#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(m), c(k);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (auto &i : c) cin >> i;

    vector<long long> res;
    int i = 0, j = 0, z = 0;
    while (i < n && j < m && z < k) {
        if (a[i] == b[j] && a[i] == c[z]) {
            res.push_back(a[i]);
            i++, j++, z++;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[z]) j++;
        else z++;
    }
    
    if (res.empty()) cout << -1;
    else {
        for (auto i : res) {
            cout << i << " ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
