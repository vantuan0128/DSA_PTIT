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

/*
Cho 2 String S1 (0 <= S1.length() <= 10) và S2 (0 <= S2.length() <= 1000). Biết rằng String S1 có độ dài luôn nhỏ hơn String S2. Hãy tìm số lần xuất hiện của String S1 trong String S2.

Input
Có tổng cộng 10 test case.
Mỗi test case gồm 3 dòng.
Dòng đầu tiên của mỗi test case là số thứ tự của test case đó.
Dòng thứ 2 của mỗi test case là String S1.
Và dòng thứ 3 của mỗi test case là String S2.
Lưu ý, String S2 có thể chứa khoảng trắng (dấu cách).

Output
In đáp số theo định dạng sau:
Ký tự đầu tiên là ký tự "#", tiếp theo đó là số thứ tự của test case, tiếp theo là số lần xuất hiện của String S1 trong String S2.

Example
Input:
1
ab
abbbaaabbbab

Output:
#1 3
*/
