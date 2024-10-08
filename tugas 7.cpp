#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan nilai-nilai untuk array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    cout << "Nilai tertinggi dalam array adalah: " << maxValue << endl;


    int checkNumber;
    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> checkNumber;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == checkNumber) {
            cout << "Angka " << checkNumber << " ditemukan di indeks " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Angka " << checkNumber << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
