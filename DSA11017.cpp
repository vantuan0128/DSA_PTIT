/*
Cho mảng A[] gồm N node là biểu diễn phép duyệt theo thứ tự trước (Preorder) của cây nhị phân tìm kiếm. 
Nhiệm vụ của bạn là đưa ra phép duyệt theo thứ tự sau của cây nhị phân tìm kiếm.
Đưa ra kết quả phép duyệt Postorder theo từng dòng.

Input:
2
5
40 30 35 80 100
8
40 30 32 35 80 90 100 120
Output:
35 30 100 80 40
35 32 30 120 100 90 80 40
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

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        node a = NULL;
        for(int i = 0; i < n ; i++) {
            int x;
            cin >> x;
            a = them_node(a, x);
        }
        Postorder(a);
        cout << endl;
    }
    return 0;
}
