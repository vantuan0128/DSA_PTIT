/*
Cho số nguyên N. Nhiệm vụ của bạn cần tìm số nguyên X nhỏ nhất là bội của N, và X chỉ chứa hai chữ số 0 và 9.
Input:
3
2
5
11
Output:
90
90
99
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,ok;
string s;
vector<string> res;
void ktao(){
    s=string(n,'0');
}
void sinh(){
    int i=n-1;
    while(i>=0&&s[i]=='9'){
        s[i]='0';
        i--;
    }
    if(i<0) ok=0;
    else{
        s[i]='9';
    }
}
int main(){
    n=15; 
    ktao();
    ok=1;
    while(ok){
        res.push_back(s);
        sinh();
    }
    res.erase(res.begin());
    ll ans[501];
    int dem=0;
    for(int i=1;i<=500;i++){
        for(string x : res){
            if(stoll(x)%i==0){
                ans[i]=stoll(x);
                dem++;
                break; //tim boi dau tien
            }
        }
    }
    int t; cin>>t;
    while(t--){
        int m; cin>>m;
        cout<<ans[m]<<endl;
    }
    return 0;
}

//Cach 2
#include<bits/stdc++.h>

using namespace std;
vector<string> v;

void solve(int n) {
    queue<string> q;
    q.push("9");
    while(!q.empty()) {
        string tmp = q.front();
        q.pop();
        if(stoll(tmp) % n == 0) {
            cout << tmp << endl;
            return;
        }
        q.push(tmp + "0");
        q.push(tmp + "9");
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
