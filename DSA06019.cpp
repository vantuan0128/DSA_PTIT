/*
Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. 
Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.
Input:
2
5
5 5 4 6 4
5
9 9 9 2 5
Output:
4 4 5 5 6
9 9 9 2 5
*/
#include <bits/stdc++.h>
#include <map>
using namespace std;

map<int,int> m ;
 
bool cmp(int a,int b){
	if(m[a] != m[b])
		return m[a] > m[b];
	else return a < b;
}
 
void TC(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	sort(a, a + n, cmp);
	for(int x : a) cout << x << " ";
	cout << endl;
	m.clear();
}
 
int main(){
	int t; cin >> t;
	while(t--){
		TC();
	}
}

// Cach 2
#include<bits/stdc++.h>

using namespace std;
map<int,int> m;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+4];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        sort(a, a + n, [](int b, int c) -> bool{
            if(m[b] == m[c]) {
                return b < c;
            }
            return m[b] > m[c];
        });
        for(int i = 0 ; i < n; i++) {
            cout << a[i] << " ";
        }
        m.clear();
        cout << endl;
    }
    return 0;
}
