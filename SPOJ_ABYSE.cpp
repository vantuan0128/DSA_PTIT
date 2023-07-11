#include <iostream>
#include <algorithm>
#include <string> 
#include <sstream>
#include <vector>
using namespace std;

int string_to_num(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - '0';
        res = res * 10 + x;
    }
    return res;
}

string num_to_string(int x) {
    string res = "";
    while (x > 0) {
        res += (x % 10 + '0');
        x /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        if (s.empty()) {
        	t++;  
            continue;
        }

        vector<string> v;
        stringstream ss(s);
        string token = "";

        while (ss >> token) {
            v.push_back(token);
        }

        int check = -1;
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size(); j++) {
                if (isalpha(v[i][j])) {
                    check = i;
                    break;
                }
            }
        }

        int result;
        if (check == 0) {
            result = string_to_num(v[4]) - string_to_num(v[2]);
            v[0] = num_to_string(result);
        } else if (check == 2) {
            result = string_to_num(v[4]) - string_to_num(v[0]);
            v[2] = num_to_string(result);
        } else if (check == 4) {
            result = string_to_num(v[0]) + string_to_num(v[2]);
            v[4] = num_to_string(result);
        }
        
    	for (int i = 0; i < v.size() - 1; i++) {
        	cout << v[i] << " ";
    	}
		cout << v[v.size() - 1] << endl;
        
    }

    return 0;
}

/* Cach 2
#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a.find("machula") != string::npos) {
            cout << stoi(e) - stoi(c) << " + " << c << " = " << e << endl;
        } else if (c.find("machula") != string::npos) {
            cout << a << " + " << stoi(e) - stoi(a) << " = " << e << endl;
        } else {
            cout << a << " + " << c << " = " << stoi(a) + stoi(c) << endl;
        }
    }
    return 0;
}
*/
