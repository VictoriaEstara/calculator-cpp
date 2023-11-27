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
