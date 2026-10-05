#include <iostream>
using namespace std;
string cekStatus(int nilai) {
    if (nilai >= 75) {
        return "Lulus";
    } else {
        return "Tidak Lulus";
    }
}

// Function tanpa parameter
void tampilkanJudul() {
    cout << "=== PROGRAM PENILAIAN MAHASISWA ===" << endl;
}
