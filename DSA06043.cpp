/*
Cho dãy số A[] gồm có N phần tử nguyên dương. Phần tử thứ i được gọi là điểm cân bằng của dãy số nếu như tổng các số bên trái bằng tổng các số bên phải của nó.
Nhiệm vụ của bạn là điểm cân bằng đầu tiên của dãy A[] cho trước. Nếu không có đáp án, in ra -1.
Input:
2
7
-7 1 5 2 -4 3 0
5
1 2 3 4 5
Output:
4
-1
*/
#include <bits/stdc++.h>
using namespace std;
int xuly(int a[], int n){
	int total_sum = 0, left_sum = 0, right_sum = 0;
	for(int i = 0; i < n; i++){
		total_sum += a[i];
	}
	for(int i = 0;i < n; i++){
		total_sum -= a[i];
		right_sum = total_sum;
		if(left_sum == right_sum) return i+1;
		else left_sum += a[i];
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << xuly(a,n) << endl;
	}
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int solve(int a[], int n) {
    int res = -1;
    int l = 0, r = n-1;
    int sum1 = a[l], sum2 = a[r];
    while(r - l > 2) {
        if(sum1 == sum2) {
            if(r - l == 2) {
                return l + 1;
            }
            ++l;
            --r;
            sum1 += a[l];
            sum2 += a[r];
        }
        else if(sum1 < sum2) {
            ++l;
            sum1 += a[l];
        }
        else {
            --r;
            sum2 += a[r];
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+5];
        long long sum = 0;
        for(int i = 1; i<= n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        long long sumL[n+5] = {0};
        for(int i = 1; i <= n;i++) {
            sumL[i] = sumL[i-1] + a[i];
        }
        int ok = 0;
        for(int i = 1; i <= n; i++) {
            long long tmp = sum - a[i];
            if(tmp % 2 == 0) {
                tmp /= 2;
                if(tmp == sumL[i-1]) {
                    ok = 1;
                    cout << i << endl;
                    break;
                }
            }
        }
        if(ok == 0) {
            cout << -1 << endl;
        }
        
    }
    return 0;
}
