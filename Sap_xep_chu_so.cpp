#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
	ll a;
	int t;
	cin>>t;
	while(t--){
		int x[100];
		int n;cin>>n;
		set <int> mp;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		int N;
		for(int i=0;i<n;i++){
			while(x[i]>0){
				N=x[i]%10;
				x[i]/=10;
				mp.insert(N);
			}
		}
		for(auto it : mp){
			cout<<it<<" ";
		}
		cout<<endl;
	}
return 0;
}
