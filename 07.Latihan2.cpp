
#include <iostream>
using namespace std;

int main() {
    int nilai, kehadiran;

    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    cout << "Masukkan persentase kehadiran: ";
    cin >> kehadiran;

    if (nilai >= 75) {
        if (kehadiran >= 75) {
            cout << "Mahasiswa dinyatakan LULUS";
        }
        else {
            cout << "Tidak lulus karena kehadiran kurang";
        }
    }
    else {
        cout << "Mahasiswa dinyatakan TIDAK LULUS";
    }

    return 0;
}
