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
