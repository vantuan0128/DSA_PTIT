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
Cho 2 s? a, b (1 <= a <= b <= 107) v� b - a <= 104. H�y t�m c�c s? ch�nh phuong trong kho?ng [a, b].
Bi?t s? ch�nh phuong l� s? khi can b?c hai s? d� ta thu du?c k?t qu? l� 1 s? nguy�n.

Input
D�ng d?u ti�n c?a input l� s? lu?ng test case T (T <= 50). T d�ng ti?p theo ch?a th�ng tin c?a c�c test case. Test case g?m duy nh?t 1 d�ng ch?a 2 s? nguy�n a v� b

Output
In k?t qu? theo d?nh d?ng sau: k� t? d?u ti�n l� "#" ti?p theo l� s? th? t? c?a test case, ti?p theo d� l� kho?ng tr?ng (d?u c�ch) v� cu?i c�ng l� c�c s? ch�nh phuong th?a m�n du?c vi?t c�ch nhau b?i kho?ng tr?ng (d?u c�ch).
N?u trong kho?ng [a, b] kh�ng c� s? ch�nh phuong n�o, in ra "NO NUMBER".

Example
Input:
1
1 10

Output:
#1 1 4 9
*/
