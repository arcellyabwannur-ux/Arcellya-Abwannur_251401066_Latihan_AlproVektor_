#include <iostream>
#include <vector>
using namespace std;

int nilaiTerbesar(vector<int> &nilai, int n) {
    if (n == 1)
        return nilai[0];

    int maxSebelumnya = nilaiTerbesar(nilai, n - 1);

    if (nilai[n - 1] > maxSebelumnya)
        return nilai[n - 1];
    else
        return maxSebelumnya;
}

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    cout << "{";
    for (int i = 0; i < n; i++) {
        cout << data[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    cout << "Nilai terbesar = " << nilaiTerbesar(data, n) << endl;
}