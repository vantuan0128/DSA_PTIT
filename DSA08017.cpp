/*
Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.
Input:
2
2
3
Output:
88 86 68 66 8 6
888 886 868 866 688 686 668 666 88 86 68 66 8 6
*/
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
	for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<' ';
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) xuli();
	return 0;
}
