#include <bits/stdc++.h>
using namespace std;

void xuli(){
	int n; cin>>n;
	queue <string> q;
	q.push("6");
	q.push("8");
	vector<string> res;
	while(1){
		string tmp=q.front();
		res.push_back(tmp);
		q.pop();
		if(tmp.length()<=n-1){ //gap n phan tu dau tien thi break
			q.push(tmp+'6');
			q.push(tmp+'8');
		}
		else break;
	}
	while(q.size()){ //cac truong hop co n phan tu con lai
		res.push_back(q.front());
		q.pop();
	}
	cout<<res.size()<<endl;
	for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<' ';
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) xuli();
	return 0;
}
