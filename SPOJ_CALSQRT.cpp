#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int x = 1; x <= t; x++) {
        int n;
        cin >> n;
        float k = (int) sqrt(n);
        if (int(k * k) == n) {
            cout << "#" << x << " " << (int) k << endl;
        } else {
            cout << "#" << x << " ";
            printf("%.0f\n", k);
        }
    }
    return 0;
}
/*
Cho 2 s? a, b (1 <= a <= b <= 107) và b - a <= 104. Hãy tìm các s? chính phuong trong kho?ng [a, b].
Bi?t s? chính phuong là s? khi can b?c hai s? dó ta thu du?c k?t qu? là 1 s? nguyên.

Input
Dòng d?u tiên c?a input là s? lu?ng test case T (T <= 50). T dòng ti?p theo ch?a thông tin c?a các test case. Test case g?m duy nh?t 1 dòng ch?a 2 s? nguyên a và b

Output
In k?t qu? theo d?nh d?ng sau: ký t? d?u tiên là "#" ti?p theo là s? th? t? c?a test case, ti?p theo dó là kho?ng tr?ng (d?u cách) và cu?i cùng là các s? chính phuong th?a mãn du?c vi?t cách nhau b?i kho?ng tr?ng (d?u cách).
N?u trong kho?ng [a, b] không có s? chính phuong nào, in ra "NO NUMBER".

Example
Input:
1
1 10

Output:
#1 1 4 9
*/
