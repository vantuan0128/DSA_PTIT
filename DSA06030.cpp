/*
Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp nổi bọt. 
Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).
Chú ý: thuật toán sắp xếp nổi bọt có thể kết thúc khi tất cả dãy đã sắp xếp, không còn cặp số cạnh nhau nào sai thứ tự.
Input:
1
6
4 1 3 9 8 5
Output:
Buoc 2: 1 3 4 5 8 9
Buoc 1: 1 3 4 8 5 9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n];
		vector<int>v[1001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int k=0;
		for(int i=0;i<n;i++){
			int ok=0;
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					ok=1;
				}
			}
	if(ok==1){
		for(int h=0;h<n;h++){
			v[k].push_back(a[h]);
		}	
		++k;
		}
	}
	
	for(int i=k-1;i>=0;i--){
		cout<<"Buoc"<<" "<<i+1<<":"<<" ";
		for(int it:v[i]){
			cout<<it<<" ";
		}
		
		cout<<endl;
	}
}
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
        int a[n+4];
        for(int i = 0; i <n; i++) {
            cin >> a[i];
        }
        stack<pair<int,vector<int>>> st;
        for(int i = 0; i < n; i++) {
            int ok = 0;
            for(int j = 0; j < n-i-1; j++) {
                if(a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                    ok = 1;
                }
            }
            if(ok == 1) {
                vector<int> tmp;
                for(int k = 0; k < n; k++) {
                    tmp.push_back(a[k]);
                }
                st.push({i+1, tmp});
            }
        }
        while(!st.empty()) {
                pair<int,vector<int>> tmp = st.top(); st.pop();
                cout << "Buoc " << tmp.first <<": ";
                for(auto x : tmp.second) {
                    cout << x << " ";
                }
                cout << endl;
            }
    }
    return 0;
}
