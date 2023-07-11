#include <iostream>
#include <string>

using namespace std;

int init(string s2,string s1) {
    if (s1.length() == 0 || s2.length() == 0) return 0;
    int cnt = 0;
    //Find the first index of string s1 in string s2 then add the position to vt
	//Continue seeking for other index of s1 and count its frequence 
    for (size_t vt = s2.find(s1); vt != string::npos; vt = s2.find(s1, vt + s1.length())) {
        ++cnt;
    }
    return cnt;
}

int main() {
	int dem = 1;
	while(dem <= 10){
		int m; cin >> m;
		cin.ignore();
		string s1, s2;
		getline(cin,s1);
		getline(cin,s2);
		if(s1.empty() || s2.empty())  cout << "#" << m << " 0" << endl;
		else cout << "#" << m << " " << init(s2, s1) << endl;
		dem++;
	}
    return 0;
}

