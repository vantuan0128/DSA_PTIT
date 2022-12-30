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
				i=j;
			}
		}
		cout<<ans<<endl;
	}
}
