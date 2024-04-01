#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	string umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;

	cout << "alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat.kota;


}