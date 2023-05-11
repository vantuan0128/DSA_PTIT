/*
Cho một mảng A[] gồm N phần tử. Nhiệm vụ của bạn là đưa ra 1 nếu mảng A[] biểu diễn phép duyệt inorder của cây nhị phân tìm kiếm, ngược lại đưa ra 0.
Input:
3
5
10 20 30 40 50
6
90 80 100 70 40 30
3
1 1 2
Output:
1
0
0
*/
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node *left, *right;
    Node(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

typedef struct Node* node;

node them_node(node a, int x) {
    if(a == NULL) {
        a = new Node(x);
    }
    else {
        if(a->val > x) {
            a->left = them_node(a->left, x);
        }
        else if(a->val < x) {
            a->right = them_node(a->right, x);
        }
    }
    return a;
}

void Postorder(node a) {
    if(a== NULL) return ;
    Postorder(a->left);
    Postorder(a->right);
    cout << a->val << " ";
}

bool check(int a[], int n) {
    for(int i = 1; i <= n-1 ; i++) {
        if(a[i] >= a[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1; i <= n ; i++) {
            cin >> a[i];
        }
        if(check(a,n)) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}
