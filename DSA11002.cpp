/*
Cho một cây biểu thức là một cây nhị phân đầy đủ bao gồm các phép toán +, -, *. / và một số toán hạng có giá trị nguyên. 
Nhiệm vụ của bạn là hãy tính toán giá trị biểu thức được biểu diễn trên cây nhị phân đầy đủ. 
Ví dụ với cây dưới đây là biểu diễn của biểu thức P = ( (5*4) + (100-20)) sẽ cho ta giá trị là 100.
Input:
2
7
+ * - 5 4 100 20
3
- 4 7 
Output:
100
-3
*/
#include<bits/stdc++.h>

using namespace std;

struct Node {
    string val;
    Node *left, *right;
    Node(string x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

typedef struct Node* node;

int tinh(string a, string b, string c) {
    if(c == "+") {
        return stoll(a) + stoll(b);
    }
    if(c == "-") {
        return stoll(a) - stoll(b);
    }
    if(c == "*") {
        return stoll(a) * stoll(b);
    }
    if(c == "/") {
        return stoll(a) / stoll(b);
    }
}

bool check(string a) {
    return a == "+" || a == "-" || a == "*" || a == "/";
}

void solve(node a) {
    if(check(a->val)) {
        solve(a->left);
        solve(a->right);
        a->val = to_string(tinh(a->left->val, a->right->val, a->val));
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        getchar();
        string a[n+1];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        queue<string> q;
        for(int i =n-1; i >= 0; i--) {
            if(a[i] != "+" && a[i] != "-" && a[i] != "*" && a[i] != "/") {
                q.push(a[i]);
            }
            else {
                string tmp1 = q.front(); q.pop();
                string tmp2 = q.front(); q.pop();
                q.push(to_string(tinh(tmp2, tmp1, a[i])));
            }
        }
        cout << q.front() << endl;

    }
    return 0;
}
