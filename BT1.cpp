#include <iostream>
using namespace std;

int Sum(int a[], int n) {
    if (n == 0) return 0;
    if (a[n-1] % 2 == 0) {
        return a[n-1] + Sum(a, n-1);
    } else {
        return Sum(a, n-1);
    }
}

int main() {
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    int sum = Sum(a, n);
    cout << "Tong cac so chan trong mang: " << sum << endl;

    return 0;
}
