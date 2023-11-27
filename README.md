## Gambaran Umum

Kode ini berfungsi untuk menghitung nilai maksimal dan nilai minumum dari suatu data array yang di inputkan, jumlah data array bersifat tak terbatas.

## Bahasa Pemrograman

Kode proyek ini ditulis menggunakan bahasa pemrograman C++.

## Software Pendukung

Proyek ini dikembangkan menggunakan [Dev-C++ v5.11](https://sourceforge.net/projects/orwelldevcpp/). Pastikan Anda memiliki Dev-C++ terpasang sebelum menjalankan proyek.

## Cara Penggunaan

1. Buka proyek menggunakan Dev-C++.
2. Jalankan aplikasi dengan melakukan compile dan Run (shortcut F11).
4. Ikuti petunjuk untuk memasukkan data array.
5. Kemudian tekan 'enter' untuk menghitung dan menampilkan nilai maksimal dan minimal dari data array, serta menghitung jumlah data array yang dimasukkan.

## Contoh Penggunaan Program

```cpp
// Library yang digunakan
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int angka;
    int jumlahBilangan = 0;
	
	cout << "Selamat Datang" << endl;
    cout << "Silahkan masukkan bilangan (Masukkan 0 untuk mengakhiri):" << endl;

    while (true) {
        cin >> angka;
        if (angka == 0) {
            break;
        }
        arr.push_back(angka);
        jumlahBilangan++;
    }

    if (arr.empty()) {
        cout << "Tidak ada elemen yang dimasukkan." << endl;
        return 0;
    }

    int min_value = *min_element(arr.begin(), arr.end());
    int max_value = *max_element(arr.begin(), arr.end());
	
	cout << "------------------------------" << endl;
	cout << "Jumlah bilangan yang dimasukkan: " << jumlahBilangan << endl;
    cout << "Nilai minimum: " << min_value << endl;
    cout << "Nilai maksimum: " << max_value << endl;

    return 0;
}
