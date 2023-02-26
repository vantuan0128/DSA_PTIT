/*
Bạn được giao cho N công việc, công việc thứ i có thời gian bắt đầu là A[i] và kết thúc tại B[i]. Tại một thời điểm, bạn chỉ có thể làm một công việc.
Bạn hãy lựa chọn các công việc một cách tối ưu sao cho số công việc làm được là nhiều nhất.
Input:
1
6
5 9
1 2
3 4
0 6
5 7
8 9
Output: 4
*/

#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		pair<int,int> a[n];
		for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
		sort(a,a+n,cmp);
		int dem=1,cur=a[0].second;
		for(int i=1;i<n;i++){
			if(cur <= a[i].first){
				dem++;
				cur=a[i].second;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
