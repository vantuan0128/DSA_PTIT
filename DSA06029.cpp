/*
Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp chèn. 
Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).
Input:
6
5 8 3 9 1 4
Output:
Buoc 5: 1 3 4 5 8 9
Buoc 4: 1 3 5 8 9
Buoc 3: 3 5 8 9
Buoc 2: 3 5 8
Buoc 1: 5 8
Buoc 0: 5
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector <int> vt[1001];
	int k=0;
	int a[n],b[n]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int i,j,t,key;
	for(i=1;i<n;i++){
		key=a[i]; j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		for(int h=0;h<i+1;h++){
			vt[k].push_back(a[h]);
		}
		k++;
	}
	for(int i=k-1;i>=0;i--){
		cout<<"Buoc"<<" "<<i+1<<": ";
		for(auto it : vt[i]){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	cout<<"Buoc 0: "<<b[0]<<endl;
	return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+4];
    for(int i = 0; i <n; i++) {
        cin >> a[i];
    }
    stack<pair<int,vector<int>>> st;
    for(int i = 0; i < n; i++) {
        int j = i - 1, key = a[i];
        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = key;
        vector<int> tmp;
        for(int k = 0; k <= i; k++) {
            tmp.push_back(a[k]);
        }
        st.push({i+1, tmp});
    }
    while(!st.empty()) {
            pair<int,vector<int>> tmp = st.top(); st.pop();
            cout << "Buoc " << tmp.first - 1 <<": ";
            for(auto x : tmp.second) {
                cout << x << " ";
            }
            cout << endl;
        }
    return 0;
}

