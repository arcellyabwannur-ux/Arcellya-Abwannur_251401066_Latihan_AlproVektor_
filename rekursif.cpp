#include <iostream>
using namespace std;

double faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

int main() {
    double angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    cout << angka << "! = " << faktorial(angka);
    return 0;
}