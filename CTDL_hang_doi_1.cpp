#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--){
		int m; cin>>m;
		queue<int> q;
		while(m--){
			int ask; cin>>ask;
			switch(ask){
				case 1:cout<<q.size()<<endl; break;
				case 2:if(q.size()==0) cout<<"YES"<<endl;
							else cout<<"NO"<<endl; break;
				case 3:int a; cin>>a;
						q.push(a); break;
				case 4:if(q.size()) q.pop();break;
				case 5:if(q.size()) cout<<q.front()<<endl;
						 else cout<<-1<<endl; break;	
				case 6:if(q.size()) cout<<q.back()<<endl;
						else cout<<-1<<endl; break;					
			}
		}
	}
	return 0;
}
