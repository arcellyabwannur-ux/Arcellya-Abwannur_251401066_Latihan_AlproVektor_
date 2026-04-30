#include <iostream>
#include <vector>
using namespace std;

int nilaiTerbesar(vector<int> &nilai, int n) {
    // basis
    if (n == 1)
        return nilai[0];
    // rekursif
    int maxSebelumnya = nilaiTerbesar(nilai, n - 1);

    if (nilai[n - 1] > maxSebelumnya)
        return nilai[n - 1];
    else
        return maxSebelumnya;
}

int main() {
    vector<int> data = {70, 88, 92, 65};
    cout << "Nilai terbesar = " << nilaiTerbesar(data, data.size()) << endl;
    return 0;
}