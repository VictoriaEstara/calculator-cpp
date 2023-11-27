#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        string kalimat;

        cout << "Masukkan array: ";
        getline(cin, kalimat);

        // Menghitung jumlah kata
        int jumlahKata = 0;
        size_t posSpasi = 0;

        while ((posSpasi = kalimat.find(' ', posSpasi)) != string::npos) {
            jumlahKata++;
            posSpasi++;
        }

        jumlahKata++;

        int jumlahHuruf = 0;

        for (size_t i = 0; i < kalimat.length(); ++i) {
            char karakter = kalimat[i];
            if (isalpha(karakter)) {
                jumlahHuruf++;
            }
        }

        cout << "\nJumlah kata/angka dalam array berjumlah: " << jumlahKata << endl;
        cout << "Jumlah huruf dalam kalimat berjumlah: " << jumlahHuruf << endl;

        string kataCari;
        cout << "\nMasukkan kata/angka yang ingin Anda cari: ";
        cin >> kataCari;

        size_t posKata = kalimat.find(kataCari);
        if (posKata != string::npos) {
            int urutanKata = 1;
            size_t posAwal = 1;
            while ((posAwal = kalimat.find(' ', posAwal)) != string::npos) {
                if (posAwal < posKata) {
                    urutanKata++;
                } else {
                    break;
                }
                posAwal++;
            }

            cout << "Kata '" << kataCari << "' ditemukan pada urutan ke-" << urutanKata << " dalam data." << endl;
        } else {
            cout << "Kata '" << kataCari << "' tidak ditemukan dalam data." << endl;
        }

        // Menanyakan apakah pengguna ingin melakukan operasi lagi
        char cont_choice;
        cout << "\nLakukan operasi lagi? (y/n): ";
        cin >> cont_choice;

        // Keluar dari loop jika pengguna tidak ingin melakukan operasi lagi
        if (cont_choice != 'y' && cont_choice != 'Y') {
            break;
        }

        // Membersihkan newline dari buffer input
        cin.ignore();
    }

    return 0;
}

