#include <iostream>
using namespace std;

int main() {
	//Membuat variabel
	string nim, nama, matkul, ket;
	int n_angka;
	char n_huruf;
	
	// Title
	cout << "========================================" << endl;
	cout << "        Algoritma dan Pemograman         "<< endl;
	cout << "========================================" << endl;
	
	//Input untuk memasukan data
	cout << "Masukan NIM       : ";
	cin >> nim;
	cout << "Masukan Nama      : ";
	getline (cin, nama);
	getline (cin, nama);
	cout << "Masukan Matakuliah: ";
	getline (cin, matkul);
	cout << "Masukan Nilai     : ";
	cin >> n_angka;
	
	//Translate dari nilai angka ke huruf
	if (n_angka >= 0 & n_angka <= 50) {
		n_huruf = 'E';
	}
	else if (n_angka >= 51 & n_angka <= 60) {
		n_huruf = 'D';
	}
	else if (n_angka >= 61 & n_angka <= 70) {
		n_huruf = 'C';
	}	
	else if (n_angka >= 71 & n_angka <= 85) {
		n_huruf = 'B';
	}
	else if (n_angka >= 86 & n_angka <= 100) {
		n_huruf = 'A';
	}
	else {
		cout << "Data tidak valid" << endl; //Muncul jika data yang di masukan salah
	}
	
	//Ket lulus atau tidak lulus
	if (n_angka >=61 & n_angka <=100) {
		ket = "Lulus";
	}
	else if (n_angka >=0 & n_angka <=60) {
		ket = "Tidak Lulus;";
	}
	else {
		cout << "Data tidak valid" << endl;
	}
	
	//Output atau hasilnya
	cout << "\n----------------------------------------" << endl;
	cout << "NIM         : " << nim << endl;
	cout << "Nama        : " << nama << endl;
	cout << "Matakuliah  : " << matkul << endl;
	cout << "Nilai Angka : " << n_angka << endl;
	cout << "Nilai Huruf : " << n_huruf << endl;
	cout << "Keterangan  : " << ket << endl;
	cout << "========================================" << endl;
}
