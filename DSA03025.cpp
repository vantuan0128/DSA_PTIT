/*
Trên trục Ox tính từ vị trí 0, người ta muốn xếp nhiều nhất các đoạn thẳng sao cho không đoạn nào chồng lấn lên nhau. 
Đoạn thẳng thứ i có vị trí bắt đầu là X1[i] và kết thúc tại X2[i], với X1[i] <= X2[i].
Hãy tính số đoạn thẳng nhiều nhất có thể được lựa chọn để đưa lên trục Ox và không có đoạn nào chồng lấn lên nhau.
Với mỗi test, viết trên 1 dòng số lượng đoạn thẳng nhiều nhất có thể được lựa chọn thỏa mãn điều kiện đề bài.
Input:
1
10
39 55
37 74
0 1
19 25
65 76
51 52
19 21
5 94
46 65
32 40
Output: 5
*/

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
using ll=long long;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.se < b.se;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			pair<int,int> x; cin>>x.fi>>x.se;
			v.pb(x);
		}
		sort(v.begin(),v.end(),cmp);
		int dem=1;
		int kthuc=v[0].se;
		for(int i=1;i<v.size();i++){
			if(kthuc <= v[i].fi){
				++dem;
				kthuc=v[i].se;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
