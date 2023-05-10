/*
Cho số tự nhiên K và xâu ký tự các chữ số S.  
Nhiệm vụ của bạn là đưa ra số lớn nhất bằng cách thực hiện nhiều nhất K lần đổi chỗ các ký tự trong S. Ví dụ K =3 và S = “1234567” ta được “7654321”.
T, K, S thỏa mãn ràng buộc: 1≤T ≤100; 1≤K≤10; 1≤.lenght(S)≤7.
Input:
3
4
1234567
3
3435335
2
1034
Output:
7654321
5543333
4301
*/
#include <bits/stdc++.h>
using namespace std;

void init(){
	int k; cin>>k;
	string s; cin>>s;
	for(int i=0;i<k&&i<s.length();i++){
		int max=i, j=s.length();
		while(j>i) {
			if(s[j]>s[max]) max=j;
			else j--;
		}
		if(max!=i) swap(s[i],s[max]);
		else k++;
	}
	cout<<s<<endl;
}

int main(){
	int t; cin>>t;
	while(t--) init();
	return 0;
}

/*
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        getchar();
        string s;
        cin >> s;
        int n = s.length();
        for(int i = 0; i < n; i++) {
            if(k == 0) break;
            char c = '0';
            for(int j = i + 1; j < n; j++) {
                c = max(c, s[j]);
            }
            if(c <= s[i]) continue;
            string newz = s;
            for(int j = i  + 1; j < s.length(); j++) {
                if(s[j] == c) {
                    string tmp = s;
                    swap(tmp[i], tmp[j]);
                    newz = max(newz, tmp);
                }
            }
            s = newz;
            k--;
        }
        cout << s << endl;
    }
    return 0;
}
*/
