/*
Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra  X = 90.
Input:
2
5
7
Output:
90
9009
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void init(){
	int n; cin>>n;
	queue <ll> q;
	q.push(9);
	while(1){
		if(q.front()%n==0){
			cout<<q.front()<<endl;
			break;
		}
		else{
			ll tmp=q.front();
			q.push(tmp*10);
			q.push(tmp*10+9);
			q.pop();
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--) init();
	return 0;
}
