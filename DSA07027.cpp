/*
Cho dãy số A[] gồm N phần tử. Với mỗi A[i], bạn cần tìm phần tử bên phải đầu tiên lớn hơn nó. Nếu không tồn tại, in ra -1.
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 100000).
Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10^9).
Input:
3
4
4 5 2 25
3
2 2 2
4
4 4 5 5
Output:
5 25 25 -1
-1 -1 -1
5 5 -1 -1
*/

#include <bits/stdc++.h>
using namespace std;
void xuly(int A[],int n){
	stack<int> st;
	int R[n],i;
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && A[i]>=st.top()) st.pop();
		if(st.empty()) R[i]=-1;
		else R[i]=st.top();
		st.push(A[i]);
	}
	for(int i=0;i<n;i++) cout<<R[i]<<' ';
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int A[n];
		for(int i=0;i<n;i++) cin>>A[i];
		xuly(A,n);
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
        int a[n+5], r[n+5];
        for(int i = 0 ; i < n;i++) {
            cin >> a[i];
        }
        stack<int> st;
        for(int i = n-1; i >=0;i--) {
            while(!st.empty() && st.top() <= a[i]) {
                st.pop();
            }
            if(st.empty()) {
                r[i] = -1;
            }
            else {
                r[i] = st.top();
            }
            st.push(a[i]);
        }
        for(int i = 0; i <n;i++) {
            cout << r[i] << " ";
        }
        cout << endl;
    }
    return 0;
}       
