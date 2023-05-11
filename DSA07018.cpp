/*
Cho hai đa thức có bậc không quá 10000 (chỉ viết ra các phần tử có hệ số khác 0). Hãy sử dụng danh sách liên kết đơn để viết chương trình tính tổng hai đa thức đó.

Dữ liệu vào: Dòng đầu ghi số bộ test. Mỗi bộ test có hai dòng, mỗi dòng ghi một đa thức theo mẫu như trong ví dụ. Số phần tử của đa thức không quá 20.

Chú ý: Bậc của các hạng tử luôn theo thứ tự giảm dần, trong đa thức chỉ có phép cộng và luôn được viết đầy đủ hệ số + số mũ (kể cả mũ 0).

Kết quả: Ghi ra một dòng đa thức tổng tính được (theo mẫu như ví dụ)
Input:
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
Output:
3*x^8 + 11*x^6 + 16*x^2 + 2*x^1 + 7*x^0
*/
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
	return A.second > B.second;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string a, b; 
		getline(cin, a);
		getline(cin, b);
		for (int i = 0; i < a.length(); i++)if (a[i] == '+')a[i] = ' ';
		for (int i = 0; i < b.length(); i++)if (b[i] == '+')b[i] = ' ';
		stringstream m(a), n(b);
		string token;
		vector<pair<int,int>> M, N;
		set<int> X;
		while (m >> token){
			int i = token.find("*x^");
			M.push_back({ stoi(token.substr(0,i)),stoi(token.substr(i + 3)) });
			X.insert(stoi(token.substr(i + 3)));
		}
		while (n >> token){
			int i = token.find("*x^");
			N.push_back({ stoi(token.substr(0,i)),stoi(token.substr(i + 3)) });
		}
		for (int i = 0; i < M.size(); i++){
			for (int j = 0; j < N.size(); j++){
				if (N[j].second == M[i].second)M[i].first += N[j].first;
			}
		}
		for (auto x : N){
			if (X.count(x.second) == 0)M.push_back(x);
		}
		sort(M.begin(), M.end(), cmp);
		for (int i = 0; i < M.size() - 1; i++){
			cout << M[i].first << "*x^" << M[i].second << " + ";
		}
		cout << M[M.size() - 1].first << "*x^" << M[M.size() - 1].second << endl;
	}
}
