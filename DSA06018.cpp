/*
Cho mảng A[] gồm n số nguyên dương. Gọi L, R là max và min các phần tử của A[]. 
Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. 
Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.
Input:
2
5
4 5 3 8 6
3
2 1 3
Output:
1
0
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		sort(a,a+n);
		for(int i=0;i<n;i++){
			int hieu=a[i+1]-a[i];
			if(i==n-1) break;
			if(hieu != 1){
				if(hieu==0) continue;
				else dem+=hieu-1;
			}
		}
		cout<<dem<<endl;
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
        set<long long> se;
        long long MAX = INT_MIN, MIN = INT_MAX;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            MAX= max(MAX, x);
            MIN= min(MIN, x);
            se.insert(x);
        }
        cout << MAX - MIN + 1 - se.size() << endl;
    }
    return 0;
}
