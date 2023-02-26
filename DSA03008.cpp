/*
Cho hệ gồm N hành động. Mỗi hành động được biểu diễn như một bộ đôi <Si, Fi> tương ứng với thời gian bắt đầu và thời gian kết thúc của mỗi hành động. 
Hãy tìm phương án thực hiện nhiều nhất các hành động được thực hiện bởi một máy hoặc một người sao cho hệ không xảy ra mâu thuẫn.
Input:
1
6
1  3  0  5  8  5
2  4  6  7  9  9
Output:
4
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
struct task{
	int start, finish;
} a[1005];
bool cmp(task x, task y){
	return x.finish<y.finish;
}
main(){
	int t,n,i,j,ans;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++) cin>>a[i].start;
		for(i=0;i<n;i++) cin>>a[i].finish;
		sort(a,a+n,cmp);
		ans=1;i=0;
		for(j=1;j<n;j++){
			if(a[j].start >= a[i].finish){
				ans++;
				i = j;
			}
		}
		cout<<ans<<endl;
	}
}
